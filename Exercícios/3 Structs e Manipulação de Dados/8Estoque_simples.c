#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main() {
    struct Produto produtos[100];
    int opcao, count = 0, codigo_busca;
    char nome_busca[50];

    do {
        printf("\n1 - Cadastrar produto\n2 - Buscar por codigo\n3 - Listar produtos\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Nome: "); scanf("%s", produtos[count].nome);
            printf("Codigo: "); scanf("%d", &produtos[count].codigo);
            printf("Quantidade: "); scanf("%d", &produtos[count].quantidade);
            printf("Preco: "); scanf("%f", &produtos[count].preco);
            count++;
        } else if (opcao == 2) {
            printf("Digite o codigo do produto: ");
            scanf("%d", &codigo_busca);
            for (int i = 0; i < count; i++) {
                if (produtos[i].codigo == codigo_busca) {
                    printf("%s - Cod: %d - Qtd: %d - Preco: %.2f\n", produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
                }
            }
        } else if (opcao == 3) {
            for (int i = 0; i < count; i++) {
                printf("%s - Cod: %d - Qtd: %d - Preco: %.2f\n", produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
            }
        }
    } while (opcao != 0);

    return 0;
}