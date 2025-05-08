#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cifraCesar(char mensagem[], int deslocamento) {
    for (int i = 0; i < strlen(mensagem); i++) {
        if (isalpha(mensagem[i])) {
            char base = (isupper(mensagem[i])) ? 'A' : 'a';
            mensagem[i] = (mensagem[i] - base + deslocamento) % 26 + base;
        }
    }
}

int main() {
    char mensagem[100];
    int deslocamento;

    printf("Digite a mensagem para criptografar: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite o deslocamento da Cifra de Cesar: ");
    scanf("%d", &deslocamento);

    cifraCesar(mensagem, deslocamento);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
