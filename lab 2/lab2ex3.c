#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 233;
  do {
    if (i <= 400 && i >= 300){
      printf("%d\n",i);
      i+=3;
    }
    else{
      printf("%d\n",i);
      i+=5;
    }
    } while (i <= 457);
  return 0;
  
}