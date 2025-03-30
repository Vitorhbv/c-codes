#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
  char nome[50];
  unsigned int idade;
  float salario;
};

typedef struct dados dad;

int main(void) {
  dad vet[4];
  int i = 0;
  char ent[10];
  char cheio[100];
  char ent2[50];

  while (1) {
    fgets(ent, 10, stdin);
    if (strcmp(ent, "inserir\n") == 0) {
      if (i < 4) {
        scanf("%s",vet[i].nome);
        scanf("%d%f", &vet[i].idade, &vet[i].salario);
        printf("Registro %s %d % inserido\n", vet[i].nome, vet[i].idade, vet[i].salario);
        i++;
      }
      else {
        fgets(cheio, 100, stdin);
        printf("Espaço insuficiente\n");
      }
    }
    else if (strcmp(ent, "mostrar\n") == 0) {
      scanf("%s",ent2);
      int encontrado = 0;
      for (int j = 0; j < i; j++) {
        if (strcmp(ent2, vet[j].nome) == 0) {
          printf("Registro %s %d %.2f\n", vet[j].nome, vet[j].idade, vet[j].salario);
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
