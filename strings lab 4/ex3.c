#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char str1[MAX_LENGTH];
    char a,b;
    setbuf(stdin,NULL);
    gets(str1);
    scanf("%c\n",&a);
    scanf("%c",&b);
    int len = strlen(str1);
    for (int i = 0; i<len; i++){
      if(str1[i] == a){
        str1[i] = b;
        break;
      }
      }
    printf("String resultante: %s\n", str1);

    return 0;
}
