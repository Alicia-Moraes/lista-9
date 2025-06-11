#include <stdio.h>
#include <stdlib.h>


int** alocarMatriz(int linhas, int colunas) { //Função que aloca uma matriz de inteiros
    int **matriz = NULL;


    matriz = (int **)malloc(linhas * sizeof(int *)); // Aloca o vetor de ponteiros para as linhas
    if (matriz == NULL)
        return NULL; // Falha na alocação

    
    for (int i = 0; i < linhas; i++) { // Aloca cada linha da matriz
        matriz[i] = NULL;
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL)
            return NULL; // Falha na alocação de uma linha
    }    

    return matriz;
}

int main() {
    int linhas, colunas;
    int **matriz;

    printf("Insira o numero de linhas:\n"); 
    scanf("%d", &linhas);

    printf("Insira o numero de colunas:\n");
    scanf("%d", &colunas);

    matriz = alocarMatriz(linhas, colunas);

    if (matriz == NULL) {
        printf("Erro ao alocar memoria para a matriz.\n");
        return 1; 
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("Matriz alocada dinamicamente:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) { // Libera a memória alocada
        free(matriz[i]);
    }
    free(matriz);

    getchar();
    return 0;
}
