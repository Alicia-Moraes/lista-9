#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero, linha = -1, coluna = -1; // Variáveis para armazenar a posição do número

    int matriz[3][3] = { // Declara e inicia a matriz 3x3
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Insira um numero:\n"); 
    scanf("%d", &numero);


    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (matriz[linha][coluna] == numero) {
                linha = linha;
                coluna = coluna;
            }
        }
    }


    if (linha != -1 && coluna != -1) // Verifica se o número foi encontrado e a posição
        printf("O numero informado esta na posicao (%d,%d) da matriz.\n", linha, coluna);
    else
        printf("O numero informado nao esta na matriz.\n");

    getchar();
    return 0;
}
