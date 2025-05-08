#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        if (tolower(str[i]) != tolower(str[j])) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra))
        printf("'%s' eh um palindromo.\n", palavra);
    else
        printf("'%s' nao eh um palindromo.\n", palavra);

    return 0;
}
