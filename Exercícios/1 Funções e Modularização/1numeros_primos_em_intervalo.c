#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    printf("Digite dois numeros (intervalo): ");
    scanf("%d %d", &a, &b);
    printf("Numeros primos entre %d e %d:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}