#include <stdio.h>
#include <stdlib.h>

void calcularTransposta(int matrizOriginal[3][3], int matrizTransposta[3][3]) { // Função pra calcular a transposta de uma matriz 3x3
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            // Inverte a linha com a coluna para obter a matriz transposta
            matrizTransposta[linha][coluna] = matrizOriginal[coluna][linha];
        }
    }
}

int main() {
    int matrizBase[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizResultado[3][3];

    calcularTransposta(matrizBase, matrizResultado); // Calcula a transposta da matriz base 
    
    printf("Matriz Transposta:\n"); // Imprime a matriz transposta
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matrizResultado[linha][coluna]);
        }
        printf("\n"); 
    }

    getchar(); 
    return 0;
}
