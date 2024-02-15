/*
Este progama pede ao usuário qualquer e depois exibe 
o número na tela
*/
#include <stdio.h> //estamos inportando uma biblioteca para trabalhar com entrada e sáda de dados

int main(){
    int idade; //declaração da variável idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o número digitado pelo usuário
                        //estamos usano o comando scanf e adicionando
                        //o valor digital ao endereço de memória
                        //da variável idade. Usamos o e-comercial par
                        //referencias o endereço de memória da variavel
                        //idade
    printf("A idade digitada é %d\n endereço da variavel idade %x \n",idade, &idade);
    return 0;
}