#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,j,k,l,val;
  printf("numero de linhas");
  scanf("%d",&i);
  printf("numero de colunas");
  scanf("%d",&j);
  int matrix[i][j];
  int maior = 0;
  for (k=0;k<i;k++){
    for(l=0;l<j;l++){
      scanf("%d",&val);
      matrix[k][l]=val;
      if (matrix[k][l]>maior){
        maior=matrix[k][l];
      }
    }
  }
  printf("%d",maior);
return 0;
}