#include <stdio.h>
#include <stdlib.h>

void somar_matrizes(int matrizA[3][3], int matrizB[3][3], int matrizResultado[3][3]) { // Função que realiza a soma de duas matrizes 3x3
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            // Soma os elementos das matrizes A e B
            matrizResultado[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }
}

int main() {
    int primeiraMatriz[3][3] = { // Declara e inicia a primeira matriz
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int segundaMatriz[3][3] = { // Declara e inicia a segunda matriz
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    int matrizSoma[3][3]; // Declara a matriz onde será armazenada a soma

    somar_matrizes(primeiraMatriz, segundaMatriz, matrizSoma); // Chama a função para somar as matrizes
    
    for (int linha = 0; linha < 3; linha++) { // Impressão da matriz resultante
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matrizSoma[linha][coluna]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}

