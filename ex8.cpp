#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int linhas, int colunas) { // Função que preenche a matriz com valores fornecidos pelo usuário
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("Digite o valor da posição [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}
