#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int tamanho = 5;

    array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL)
    {
        printf("Erro:Falha na alocação de memória.\n");

        return 1; // Para a execução do programa
    }
    for (int i = 0; i < tamanho; i++)
    {
        array[i] = i + 1;
    }
    printf("Exibindo os dados do array\n");
    for (int j = 0; j < tamanho; j++)
    {
        printf("%d -\n", array[j]);

    }
    free(array);
    return 0;
    
}