#include <stdio.h>

int buscaBinaria(int v[], int tamanho, int alvo) {
    int inicio = 0, fim = tamanho - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (v[meio] == alvo) return meio; // encontrado
        else if (v[meio] < alvo) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1; // não encontrado
}

int main() {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(v) / sizeof(v[0]);
    int alvo;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &alvo);

    int pos = buscaBinaria(v, tamanho, alvo);
    if (pos != -1)
        printf("Elemento %d encontrado na posicao %d.\n", alvo, pos);
    else
        printf("Elemento %d nao encontrado.\n", alvo);

    return 0;
}
