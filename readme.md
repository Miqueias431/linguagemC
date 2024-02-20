# Estudo da linguaguem C
## Neste repositório será publicado arquivos escritos em C

<img src="https://blog.mchalet.com.br/_next/image?url=https%3A%2F%2Fmedia.graphassets.com%2F15iiSXSRMSFSooKzltg6&w=3840&q=100" 
height="150" width="300">

### Abaixo é apresentado os arquivos deste repositório

### Arquivo hello.c

```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0; 
}
```

### Arquivo primeiro.c

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

### Arquivo Operacoes.c

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

### Arquivo desconto.c

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

### Arquivo parimpar.c

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

### Arquivo media_aluno.c

```c
/*
Neste progama iremos calcular a nota média do 
aluno. Teremos a entrada de 4 notas, depois 
será feito o cálculo da média, onde iremos
somar as notas e depois dividir por 4. 
Se o aluno tiver uma média acima de ou igual a 7,
então estára aprovado; caso o aluno tenha 
uma nota menor ou igual a 4, então o aluno
estará reprovado; caso contrário, estará em
recuperação
*/
#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;
    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("Digite a terceira nota: \n");
    scanf("%f",&n3);


    printf("Digite a quarta nota: \n");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4) /4;

    printf("A nota média do aluno é %2.2f\n",md);

    if( md >=7){
        printf("Aprovado\n");
    }
    else if ( md <=4){
        printf("Reprovado\n");
    }
    else{
        printf("Recuperação\n");
    }

    return 0;

}
```

### Arquivo bissexto.c

```c
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
```

### Arquivo while1.c

```c
#include <stdio.h>

int main(){
    int i = 0;
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }
return 0;
}
```

### Arquivo while_bissexto.c

```c
#include <stdio.h>

int main (){
    int ano = 1952;
    int qtd = 0;

    while(ano <= 2024) {
        if (ano % 4 == 0){
            printf("%d é um ano bissexto\n", ano);
            qtd++;
        } else {
            printf("%d não é um ano bissexto\n", ano);
        }
        ano++;
    }
    printf("Temos %d anos bissextos\n",qtd);
    return 0;
}
```

### Arquivo while_dec_bin.c

```c
#include <stdio.h>

int main(){

    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;

    while(dec > 0){
        resto = dec % 2;
        dec = dec/2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;
}
```
### Arquivo while_bin_dec.c

```c
#include <stdio.h>
#include <math.h>

int main() {
    int binario[6] = {1,0,1,1,1,0};

    int rs = 0;
    int pos = 0;
    int exp = 5;
    while (pos <= 5){
        rs += binario[pos] * ( pow(2, exp));
        pos++;
        exp--;
    }
    printf("%d\n", rs);
    return 0;
}
```