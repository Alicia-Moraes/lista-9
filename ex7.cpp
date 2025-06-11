#include <stdio.h>
#include <stdlib.h>

void liberarMatriz(int** matriz, int totalLinhas) { // Função que libera a memória alocada de uma matriz
    for (int linha = 0; linha < totalLinhas; linha++) { // Libera cada linha individualmente
        free(matriz[linha]);
    }
    
    free(matriz);
}
