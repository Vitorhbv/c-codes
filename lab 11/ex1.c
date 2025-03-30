#include <stdio.h>
#include <stdlib.h>

int soma(int vetor[], int tamanho_vetor){
  if (tamanho_vetor == 0){
    return 0;
  }
  else{
    return vetor[tamanho_vetor - 1] + soma(vetor, tamanho_vetor -1);
  }
}

int main(void) {
  int n;
  scanf("%d",&n);
  int* vetor = (int*)malloc(n * sizeof(int));
  if (vetor == NULL) {
      printf("Erro ao alocar memória\n");
      return 1;  
  }
  for (int i = 0; i < n; i++) {
      scanf("%d", &vetor[i]);
    }
  printf("%d",soma(vetor,n));
  return 0;
}