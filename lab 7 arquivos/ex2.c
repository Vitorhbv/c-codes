#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int count = 0;
  char c;
  scanf("%s",nome);
  FILE * arq;
  char nome;
  arq = fopen(nome,"rb");
  if (arq == NULL){
    printf("Erro na abertura de arquivo\n");
    system("pause");
    exit(1);
  }
  int i;
  while (c!= EOF){
    c = fgetc(arq);
    if (c == "a"){
      count++;
    }
  }
  printf("%d",count);
  fclose(arq);
}