#include <stdio.h>

int main() {
    int M[5][5];
    int soma_linha4 = 0;
    int soma_coluna2 = 0;
    int soma_diagonall = 0;
    int soma_tudo = 0;
    
    printf("Digite os elementos da matriz M:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (int j = 0; j < 5; j++) {
        soma_linha4 += M[3][j];
    }

    for (int i = 0; i < 5; i++) {
        soma_coluna2 += M[i][1];
    }

    for (int i = 0; i < 5; i++) {
        soma_diagonall += M[i][i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma_tudo += M[i][j];
        }
    }

    printf("\nMatriz M:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da linha 4: %d\n", soma_linha4);
    printf("Soma da coluna 2: %d\n", soma_coluna2);
    printf("Soma da diagonal principal: %d\n", soma_diagonall);
    printf("Soma de todos elementos: %d\n", soma_tudo);

    return 0;
}