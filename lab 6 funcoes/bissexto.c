#include <stdio.h>
#include <stdlib.h>
int bissex(int ano) {
    if ((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}
int main() {
    int ano;
    while (scanf("%d", &ano) != EOF) {
        if (bissex(ano)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
