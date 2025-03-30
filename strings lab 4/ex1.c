#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    setbuf(stdin,NULL);
    gets(str1);
    gets(str2);
    strcat(str1,str2);
    printf("String resultante: %s\n", str1);

    return 0;
}