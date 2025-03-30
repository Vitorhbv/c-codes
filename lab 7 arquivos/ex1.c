#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  int count = 0;
  char c;
  FILE * arq;
  arq = fopen(argv[1],"r");
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