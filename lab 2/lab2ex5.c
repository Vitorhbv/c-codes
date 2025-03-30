#include <stdio.h>
#include <stdlib.h>

int main() {
  int a,i;
  int cont=0;
  int sum=0;
  scanf("%d",&a);
  for (i=1 ; i<=a; i++){
    cont+=1;
    sum+=cont;
     }
  printf("%d",sum);
  return 0;
}
  