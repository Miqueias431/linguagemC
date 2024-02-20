#include <stdio.h>

int main() {
    
    int base,exp,i,b;

    printf("Digite a base:\n ");
    scanf("%d",&base);

    printf("Digite o expoente:\n ");
    scanf("%d", &exp);

    for (int i = 1; i < exp; i++) {
        /*base *= b;*/
        base = base * b;
    }
    
    printf("%d\n",base);

    return 0;
}
