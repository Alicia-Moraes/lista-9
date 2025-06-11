#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int **matriz, int totalLinhas, int totalColunas) { //Função que imprime uma matriz inteira com (linhas x colunas)
    printf("\nMatriz:\n");
    for (int linha = 0; linha < totalLinhas; linha++) {
        for (int coluna = 0; coluna < totalColunas; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
