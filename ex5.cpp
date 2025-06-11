#include <stdio.h>
#include <stdlib.h>


void multiplicarMatrizes3x3(int matrizA[3][3], int matrizB[3][3], int matrizResultado[3][3]) { // Função que realiza a multiplicação de duas matrizes 3x3

    for (int linha = 0; linha < 3; linha++) { 
        for (int coluna = 0; coluna < 3; coluna++) {
            matrizResultado[linha][coluna] = 0; // Inicia o valor da posição
            for (int indice = 0; indice < 3; indice++) { // Multiplica os elementos da linha de A com a coluna de B
                matrizResultado[linha][coluna] += matrizA[linha][indice] * matrizB[indice][coluna];
            }
        }
    }
}
