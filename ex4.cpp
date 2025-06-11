#include <stdlib.h>
#include <stdio.h>

int main() {
    int somaDiagonal = 0; // Variável que armazena a soma dos elementos da diagonal principal

    int matriz[3][3] = {  // Matriz 3x3
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int linha = 0; linha < 3; linha++) { // Percorre a matriz para somar os elementos da diagonal principal
        for (int coluna = 0; coluna < 3; coluna++) {
            // Condição para estar na diagonal principal (valor da linha igual ao da coluna)
            if (linha == coluna) {
                somaDiagonal += matriz[linha][coluna];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", somaDiagonal); // Resultado da soma da diagonal principal

    getchar();
    return 0;
}
