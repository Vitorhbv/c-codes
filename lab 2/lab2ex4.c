#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale (LC_CTYPE, "pt_BR.UTF-8"); 
  int x;
  int i=1;
  int cont1=0;
  int cont2=0;
  int cont3=0;
  int cont4=0;
  scanf("%d",&x);
  while (i <= x){
    i++;
    if (i%2 == 0){
      cont1++;
    }
    if (i%3==0){
      cont2++;
    } 
    if (i%5==0){
      cont3++;
    }
    if (i%2==0 && i%3==0 && i%5==0){
      cont4++;
    }
  }
    printf("Mútiplos de 2: %d\nMúltiplos de 3: %d\nMúltiplos de 5: %d\nMúltiplos de todos: %d\n",cont1,cont2,cont3,cont4);
  return 0;
}
  