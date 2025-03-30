#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, cont;

    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    len1 = strlen(str1) - 1;
    fgets(str2, 100, stdin);
    len2 = strlen(str2) - 1;

    cont = 0;
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i+j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            cont++;
        }
    }

    if (cont > 0) {
        printf("eh substring");
    } else {
        printf("nao eh substring");
    }

    return 0;
}
