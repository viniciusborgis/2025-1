#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    struct Aluno alunos[n];
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: "); scanf("%s", alunos[i].nome);
        printf("Matricula: "); scanf("%d", &alunos[i].matricula);
        printf("Media: "); scanf("%f", &alunos[i].media);
    }
    printf("\nAlunos aprovados (media >= 7.0):\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("%s (Matricula: %d) - Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
    return 0;
}