#include <stdio.h>

int main() {
    int a[5], b[5];
    printf("Digite 5 valores para o vetor A: ");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Digite 5 valores para o vetor B: ");
    for (int i = 0; i < 5; i++) scanf("%d", &b[i]);
    printf("Elementos comuns: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}