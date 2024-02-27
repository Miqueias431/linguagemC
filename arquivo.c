#include <stdio.h>
int main()
{
    FILE *arquivo;
    char texto[100];

    // Abre o arquivo para escrita
    arquivo = fopen("teste.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve no arquivo
    fprintf(arquivo, "Olá, este é um exemplo de manipulação de arquivos em C.");

    // Fecha o arquivo
    fclose(arquivo);

    // Abre o aquivo para leitura
    arquivo = fopen("teste.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o conteúdo do arquivo e imprime na tela
    fgets(texto, 100, arquivo);
    printf("Conteúdo do arquivo: %s\n", texto);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}