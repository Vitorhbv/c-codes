#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto {
    char nome[51];
    char marca[51];
    float preco;
} Produto;

int main() {
    Produto produtos[8];
    char marcas[8][51];
    float precos[8];
    int nMarcas = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%s %s %f", produtos[i].nome, produtos[i].marca, &produtos[i].preco);
        int marcaExiste = 0;
        for (int j = 0; j < nMarcas; j++) {
            if (strcmp(marcas[j], produtos[i].marca) == 0) {
                marcaExiste = 1;
                break;
            }
        }
        if (!marcaExiste) {
            strcpy(marcas[nMarcas], produtos[i].marca);
            nMarcas++;
        }
        precos[i] = produtos[i].preco;
    }
    for (int i = 0; i < nMarcas; i++) {
        int nProdutos = 0;
        for (int j = 0; j < 8; j++) {
            if (strcmp(marcas[i], produtos[j].marca) == 0) {
                nProdutos++;
            }
        }
        printf("%s %d\n", marcas[i], nProdutos);
    }
    float mediaTotal = 0;
    for (int i = 0; i < 8; i++) {
        mediaTotal += precos[i];
    }
    mediaTotal /= 8;
    printf("media total %.2f\n", mediaTotal);
    for (int i = 0; i < nMarcas; i++) {
        float mediaMarca = 0;
        int nProdutos = 0;
        for (int j = 0; j < 8; j++) {
            if (strcmp(marcas[i], produtos[j].marca) == 0) {
                mediaMarca += precos[j];
                nProdutos++;
            }
        }
        mediaMarca /= nProdutos;
        printf("media %s %.2f\n", marcas[i], mediaMarca);
    }

    return 0;
}
