#include <stdio.h>
#include <stdlib.h>

int eh_primo(int numero) {
  if (numero < 2) {
      return -1; 
  }  
  int i;
  for (i = 2; i <= numero/2; i++) {
      if (numero % i == 0) {
          return 0; 
      }
  } 
  return 1; 
}
int main() {
  int num;  
  while (scanf("%d", &num) != EOF) {
      int resultado = eh_primo(num);
      if (resultado == -1) {
          printf("%d\n", resultado);
      } else if (resultado == 0) {
          printf("%d\n", resultado);
      } else {
          printf("%d\n", resultado);
      }
  }
  
  return 0;
}
