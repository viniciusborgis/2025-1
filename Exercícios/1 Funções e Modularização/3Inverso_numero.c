#include <stdio.h>

int inverteNumero(int n) {
    int inverso = 0;
    while (n != 0) {
        inverso = inverso * 10 + n % 10;
        n /= 10;
    }
    return inverso;
}

int main() {
    int numero;
    printf("Digite um numero para inverter: ");
    scanf("%d", &numero);
    printf("Numero invertido: %d\n", inverteNumero(numero));
    return 0;
}