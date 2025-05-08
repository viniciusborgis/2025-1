#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[20];
};

int main() {
    struct Contato contatos[100];
    int opcao, count = 0;
    char nome_busca[50];

    do {
        printf("\n1 - Adicionar contato\n2 - Buscar por nome\n3 - Listar todos\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Nome: "); scanf("%s", contatos[count].nome);
            printf("Telefone: "); scanf("%s", contatos[count].telefone);
            count++;
        } else if (opcao == 2) {
            printf("Digite o nome para buscar: ");
            scanf("%s", nome_busca);
            for (int i = 0; i < count; i++) {
                if (strcmp(contatos[i].nome, nome_busca) == 0) {
                    printf("%s - %s\n", contatos[i].nome, contatos[i].telefone);
                }
            }
        } else if (opcao == 3) {
            for (int i = 0; i < count; i++) {
                printf("%s - %s\n", contatos[i].nome, contatos[i].telefone);
            }
        }
    } while (opcao != 0);

    return 0;
}