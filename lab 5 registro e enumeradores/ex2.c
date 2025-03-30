#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
  char rua[50];
  unsigned int numero;
  char estado[50];
};

typedef struct endereco Endereco;

struct dados {
  char nome[50];
  unsigned int idade;
  float salario;
  Endereco end;
};

typedef struct dados Dados;

int main(void) {
  Dados vet[5];
  int i = 0;
  char ent[10];
  char cheio[100];
  char ent2[50];
  char ent3[50];
  int ent4;
  float ent5;
  char ent6[50];
  int ent7;
  char ent8[50];

  while (fgets(ent, 10, stdin)) {
    
    if (strcmp(ent, "inserir\n") == 0) {
      if (i < 5) {
        scanf("%s", vet[i].nome);
        scanf("%d%f", &vet[i].idade, &vet[i].salario);
        scanf("%s%d%s", vet[i].end.rua, &vet[i].end.numero, vet[i].end.estado);
        printf("Registro %s %d %.2f %s %d %s inserido\n", vet[i].nome, vet[i].idade, vet[i].salario, vet[i].end.rua, vet[i].end.numero, vet[i].end.estado);
        i++;
      }
      else {
        fgets(cheio, 100, stdin);
        printf("Espaco insuficiente\n");
      }
    }
    else if (strcmp(ent, "alterar\n") == 0) {
      scanf("%s%d%f%s%d%s", ent3, &ent4, &ent5, ent6, &ent7, ent8);
      int encontrado2 = 0;
      for (int k = 0; k < i; k++) {
        if (strcmp(ent3, vet[k].nome) == 0) {
          strcpy(vet[k].nome, ent3);
          vet[k].idade = ent4;
          vet[k].salario = ent5;
          strcpy(vet[k].end.rua, ent6);
          vet[k].end.numero = ent7;
          strcpy(vet[k].end.estado, ent8);
          printf("Registro %s %d %.2f %s %d %s alterado\n", vet[k].nome, vet[k].idade, vet[k].salario, vet[k].end.rua, vet[k].end.numero, vet[k].end.estado);
          encontrado2 = 1;
          break;
        } 
      }
      if (encontrado2 == 0) {
        printf("Registro ausente para alteracao\n");
      }
    } 
    else if (strcmp(ent, "mostrar\n") == 0) {
      scanf("%s", ent2);
      int encontrado = 0;
      for (int j = 0; j < i; j++) {
        if (strcmp(ent2, vet[j].nome) == 0) {
          printf("Registro %s %d %.2f %s %d %s \n", vet[j].nome, vet[j].idade, vet[j].salario, vet[j].end.rua, vet[j].end.numero, vet[j].end.estado);
          encontrado = 1;
          break;
        }
      }
      if (encontrado == 0) {
        printf("Registro ausente\n");
      }
    }
  }

  return 0;
}

