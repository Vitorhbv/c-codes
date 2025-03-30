#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct agenda {
    char nome[50];
    int idade;
    char tel[20];
};
typedef struct agenda agenda;

int main(void){
    int i = 0;
    char nome[50];
    char cheio[50];
    char exibir[50];
    char var[50];
    agenda dados[100];
    scanf("%s",nome);
    FILE* arq = fopen(nome, "rb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    for (i=0; i < 100; i++){
    fread (&dados[i], sizeof(agenda),1,arq);
    }
    fclose(arq);
    while(scanf("%s",var) != EOF){
        
        if (strcmp(var,"inserir") == 0){
            if (i < 100){
                scanf("%s %d %s",dados[i].nome,&dados[i].idade, dados[i].tel);
                printf("Registro %s %d %s inserido\n", dados[i].nome, dados[i].idade, dados[i].tel);
                i++;
            }
            else {
                fgets(cheio, 50, stdin);
                    printf("Espaco insuficiente\n");
                }
        }
        else if (strcmp(var, "alterar") == 0){
            scanf("%s %d %s",dados[i].nome,&dados[i].idade, dados[i].tel);
            int encontrado = 0;
            for (int k = 0; k < i; k++) {
                if (strcmp(dados[i].nome, dados[k].nome) == 0) {
                    strcpy(dados[k].nome, dados[i].nome);
                    dados[k].idade = dados[i].idade;
                    strcpy(dados[k].tel, dados[i].tel);
                    printf("Registro %s %d %s alterado\n", dados[k].nome, dados[k].idade, dados[k].tel);
                    encontrado = 1;
                    break;
                }             
            }
            if (encontrado == 0){
                printf("Registro %s invalido",dados[i].nome);
            }
        }
        else if (strcmp(var, "exibir") == 0){
            scanf("%s",exibir);
            int encontrado = 0;
            for (int k = 0; k < i; k++) {
                if (strcmp(exibir, dados[k].nome) == 0) {
                    printf("Registro %s %d %s exibido\n", dados[k].nome, dados[k].idade, dados[k].tel);
                    encontrado = 1;
                    break;
                }             
            }
            if (encontrado == 0){
                printf("Registro %s invalido",exibir);
            }
        }
        else if (strcmp(var, "excluir") == 0){
            scanf("%s",exibir);
            int encontrado = 0;
            for (int k = 0; k < i; k++) {
                if (strcmp(exibir, dados[k].nome) == 0) {
                    printf("Registro %s %d %s excluido\n", dados[k].nome, dados[k].idade, dados[k].tel);
                    encontrado = 1;
                    for(int j=k; j<i; j++){
                        strcpy(dados[j].nome, dados[j+1].nome);
                        dados[j].idade = dados[j+1].idade;
                        strcpy(dados[j].tel, dados[j+1].tel);
                    }
                i--;
                break;
                }
            }
            if (encontrado == 0){
            printf("Registro %s invalido\n",exibir);
            }
            }
            }
            return 0;
            }
