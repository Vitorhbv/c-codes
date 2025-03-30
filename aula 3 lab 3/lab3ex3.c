#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i;
  int vet[10];
  for (i=0;i<10;i++){
    scanf("%d",&n);
    vet[i]=n;
  }
  for (i=0;i<10;i++){
    printf("%d\n",vet[9-i]);
  }
  return 0;
}
