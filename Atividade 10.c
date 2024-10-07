#include <stdio.h>

int main() {
    int M[5][5] = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
    int SL[5] = {0};
    int SC[5] = {0};
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            SL[i] += M[i][j];
            SC[j] += M[i][j];
        }
    }

    printf("Matriz M:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor SL (soma linha):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", SL[i]);
    }
    printf("\n");

    printf("\nVetor SC (soma coluna):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", SC[i]);
    }
    printf("\n");

    return 0;
};