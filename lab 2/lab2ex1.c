#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,x_0,x_1,i,x_2;
  scanf("%d%d%d",&n,&x_0,&x_1);
  printf("X0 : %d\nX1 :% d\n",x_0,x_1);
  for (i = 2;i <= n;i++){
    x_2 = 4* x_1-2 *x_0;
    x_0 = x_1;
    x_1 = x_2;
    printf("X%d : %d \n",i, x_2);
  }
  return 0;
    
}
  