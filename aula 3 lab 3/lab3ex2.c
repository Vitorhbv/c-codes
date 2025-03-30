#include <stdio.h>
#include <stdlib.h>

int main() {
  double fib[800];
  fib[0]=0;
  fib[1]=1;
  int n;
  for (int i=2; i<=800; i++){
    fib[i]=fib[i-1]+fib[i-2];
  }
  while (1){
    printf("digite a posicao: \n");
    scanf("%d", &n);
        if (n<0 || n>800){
      break;
    }
    printf("%.0lf \n",fib[n]);
  }
  return 0;
}
  