#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6

void exibirPalavra(char palavra[], char letraChutada[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (letraChutada[i] == 1) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char palavra[] = "programacao";  // Palavra a ser adivinhada
    int tamanho = strlen(palavra);
    char letraChutada[tamanho];  // Vetor para controlar as letras já adivinhadas
    for (int i = 0; i < tamanho; i++) {
        letraChutada[i] = 0;  // Inicializa todas as letras como não adivinhadas
    }

    int tentativas = 0;
    int acertos = 0;
    char letra;
    int jogoAcabou = 0;

    printf("Jogo da Forca - Tente adivinhar a palavra!\n");

    while (tentativas < MAX_TENTATIVAS && !jogoAcabou) {
        printf("\nPalavra: ");
        exibirPalavra(palavra, letraChutada, tamanho);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);  // O espaço antes de %c é para consumir o '\n' da entrada anterior
        letra = tolower(letra);  // Converte a letra para minúscula

        int acerto = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == letra && letraChutada[i] == 0) {
                letraChutada[i] = 1;  // Marca a letra como adivinhada
                acerto = 1;
                acertos++;
            }
        }

        if (acerto) {
            printf("Boa! Você acertou uma letra.\n");
        } else {
            tentativas++;
            printf("Que pena! Você errou. Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
        }

        // Verifica se o jogador acertou a palavra inteira
        if (acertos == tamanho) {
            jogoAcabou = 1;
        }
    }

    if (jogoAcabou) {
        printf("\nParabéns! Você acertou a palavra: %s\n", palavra);
    } else {
        printf("\nGame Over! Você perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
