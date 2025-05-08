#include <stdio.h>

int main() {
    int a[3][3], b[3][3], soma[3][3];
    printf("Digite a matriz A 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Digite a matriz B 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matriz Soma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = a[i][j] + b[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}