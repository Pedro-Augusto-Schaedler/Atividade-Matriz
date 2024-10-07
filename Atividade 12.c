#include <stdio.h>

int main() {
    int M[10][10] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int soma_cima = 0;
    int soma_baixo = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                soma_cima += M[i][j];
            } else if (i > j) {
                soma_baixo += M[i][j];
            }
        }
    }
    printf("Matriz M:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma dos numeros acima da diagonal: %d\n", soma_cima);
    printf("Soma dos numeros abaixo da diagonal: %d\n", soma_baixo);

    return 0;
}