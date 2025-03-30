#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B;
    scanf("%d%d",&A,&B);
    if (A<1 || A>B || B>10000){
      return 0;
    }
    int cont, i;
    while (A<=B){
      
      cont=0;
      for (i=1;i<=(A);i++){
        if ((A%i)!=0){
          cont++;
        }
      }
      if (cont==(A-2)){
        printf("%d\n",A);
      }
      A++;
    }
    
    }