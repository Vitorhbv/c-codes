#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    setbuf(stdin,NULL);
    gets(str1);
    int len = strlen(str1);
    for (int i = 0; i<len; i++){
      str2[i] = str1[(len-1)-i];
    }
    
    printf("String resultante: %s\n", str2);

    return 0;
}
