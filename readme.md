# Estudo da linguaguem C
## Neste repositório será publicado arquivos escritos em C

<img src="https://blog.mchalet.com.br/_next/image?url=https%3A%2F%2Fmedia.graphassets.com%2F15iiSXSRMSFSooKzltg6&w=3840&q=100" 
height="150" width="300">

### Abaixo é apresentado os arquivos deste repositório

### hello.c

```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0; 
}
```

### primeiro.c

```c
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
```

### Operacoes.c

```c
int main (){
    int n1; //Número 1
    int n2; //Número 2
    int soma; //Operação
    int subtrair;
    int multiplicar;
    int dividir;
    printf("Digite um Número e tecle enter: \n");
    scanf("%d", &n1); //permite acessar seção de memória da variável n1
    printf("Digite outro número e tecle enter: \n");
    scanf("%d", &n2);
    soma=n1+n2; //ação para execultar o cálculo
    subtrair=n1-n2;
    multiplicar=n1*n2;
    dividir=n1/n2;
    printf("O resultado da soma é %d\n",soma ); //exibir resultado
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultado da divisão é %d\n",dividir);
    return 0;
}
```

### desconto.c

```c
int main(){
    float preco;
    float percentual;
    float resultado;
    float ver_desconto;
    printf("Digite o preço do produto:\n");
    scanf("%f",&preco); // %f porque está trabalhando com float
    printf("Digite o desconto do produto:\n");
    scanf("%f",&percentual);
    resultado=preco-(preco*(percentual/100));
    ver_desconto=preco-resultado;
    printf("O preço do valor do produto com desconto de %2.2f é %2.2f\n",ver_desconto,resultado);
    return 0;
}
```

### parimpar.c

```c
#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if( num % 2 == 0){
        printf("Este número é par \n");
    }
    else{
        printf("Este número é impar \n");
    }
    return 0;
}
```