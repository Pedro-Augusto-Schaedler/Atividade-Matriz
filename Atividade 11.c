#include <stdio.h>

int main() {
    int M[6][6] = {1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6};
    int A = 5;
    int V[36] = {0};
    int v = 0;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            V[v] = M[i][j] * A;
            v++;
        }
    }

    printf("\nVetor V:\n");
    for (int i = 0; i < 36; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
};