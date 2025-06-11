#include <stdio.h>
#include <stdlib.h>


int** alocarMatriz(int linhas, int colunas) { //Aloca uma matriz de inteiros
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL)
        return NULL;

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            for (int j = 0; j < i; j++)
                free(matriz[j]);
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

void preencherMatriz(int **matriz, int linhas, int colunas) { //Preenche a matriz com valores fornecidos pelo usuário
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) { //Imprime a matriz no formato tradicional
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberarMatriz(int **matriz, int linhas) { //Libera toda a memória alocada para uma matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int** multiplicarMatrizes(int **A, int linhasA, int colunasA, int **B, int linhasB, int colunasB) { //Multiplica duas matrizes e retorna a matriz resultado
    if (colunasA != linhasB)
        return NULL; // Condição para multiplicação: colunas de A = linhas de B

    int **C = alocarMatriz(linhasA, colunasB);
    if (C == NULL)
        return NULL;

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    int linhasA, colunasA, linhasB, colunasB;
    int **A, **B, **C;

    printf("MATRIZ A:\n");
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhasA);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunasA);

    A = alocarMatriz(linhasA, colunasA);
    if (A == NULL) return 1;
    preencherMatriz(A, linhasA, colunasA);

    printf("\nMATRIZ B:\n");
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhasB);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunasB);

    B = alocarMatriz(linhasB, colunasB);
    if (B == NULL) {
        liberarMatriz(A, linhasA);
        return 1;
    }
    preencherMatriz(B, linhasB, colunasB);

    C = multiplicarMatrizes(A, linhasA, colunasA, B, linhasB, colunasB); //Multiplicação das matrizes 
    if (C == NULL) {
        printf("\nNao e possivel multiplicar as matrizes. As dimensoes nao sao compativeis.\n");
    } else {
        printf("\nResultado da multiplicacao (Matriz C):\n");
        imprimirMatriz(C, linhasA, colunasB);
        liberarMatriz(C, linhasA);
    }

    liberarMatriz(A, linhasA);
    liberarMatriz(B, linhasB);

    getchar();
    return 0;
}
