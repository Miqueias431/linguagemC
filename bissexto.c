#include <stdio.h>

int main() {
    int ano;

    // Solicita ao usuário para inserir o ano
    printf("Digite um ano: \n");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d É um ano bissexto.\n", ano);
    } else {
        printf("%d Não é um ano bissexto.\n", ano);
    }

    return 0;
}