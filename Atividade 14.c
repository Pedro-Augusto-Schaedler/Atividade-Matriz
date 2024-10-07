#include <stdio.h>

int main() {
    int M[4][6];
    int N[4][6];

    printf("Digite matriz M:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite matriz N:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &N[i][j]);
        }
    }

    int produto[4][6];

   for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            produto[i][j] = M[i][j] * N[i][j];
        }
    }

    int soma[4][6];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            soma[i][j] = M[i][j] + N[i][j];
        }
    }

    int diferenca[4][6];
    int dif;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            dif = M[i][j] - N[i][j];
            if (dif <0){
                dif = 0-dif;
            }
            diferenca[i][j] = dif;
        }
    }

    printf("Matriz M:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("Matriz N:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }

    printf("Produto:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    printf("Soma:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    printf("Diferenca:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
