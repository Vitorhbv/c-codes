#include <stdio.h>
#include <stdlib.h>

int main() {
  int i,j,n,m,val;
  scanf("%d%d",&n,&m);
  int matrix[n][m];
  for (i=0;i<n;i=i+1){
    for (j=0;j<m;j++){
      scanf("%d",&val);
      matrix[i][j]=val;
      }
    }
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      printf("%d ",-matrix[i][j]);
    }
    printf("\n"); //separa as linhas
  }
  return 0;
}
  