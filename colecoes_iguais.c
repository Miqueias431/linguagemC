#include <stdio.h>

int main() {
    // Definindo os conjuntos de dados
    int c1[10] = {10,5,68,8,47,12,54,13,62,11};
    int c2[15] = {11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};

    // Comparando os conjuntos e imprimindo os números comuns
    printf("Números em comum: ");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (c1[i] == c2[j]) {
                printf("%d ", c1[i]);
            }
        }
    }
    printf("\n");

    return 0;
}

