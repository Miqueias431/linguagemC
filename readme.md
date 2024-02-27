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

### Arquivo operacoes.c

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

    //ações para execultar os cálculos
    soma=n1+n2; 
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

### Arquivo for1.c

```c
#include<stdio.h>

int main(){
    int x;

    for (x = 1; x <=10; x++){
        printf("%d\n",x);
    }

    return 0;
}
```

### Arquivo tabuada.c

```c
#include<stdio.h>

int main(){
    int num, num2;

    printf("Digite um número para a tabuada:\n");
    scanf("%d",&num);

    for(num2 = 1 ; num2 <=10; num2++){
        printf("%d x %d = %d\n",num,num2,(num*num2));
    }

    return 0;
}
```

### Arquivo baseexpoente.c

```c
#include <stdio.h>

int main() {
    
    float base,exp,i,b;

    printf("Digite a base:\n ");
    scanf("%f",&base);

    printf("Digite o expoente:\n ");
    scanf("%f", &exp);

    b = base;

    for (int i = 1; i < exp; i++) {
        /*base *= b;*/
        base = base * b;
    }
    
    printf("%2.2f\n",base);

    return 0;
}
```

### Arquivo colecao1.c

```c
// Array é um conjunto de dados sobre um determinado
// assunto. Podemos falar de valores numéricos, textos,
// datas, ou objetos
#include <stdio.h>

int main(){
    int valores[5] = {10,5,8,12,7};

    printf("%d\n", valores[5 - 1]);

    return 0;
}
```

### Arquivo colecao2.c

```c
#include <stdio.h>
int main(){

    int loud[10] = {1,21,11,8,19,45,7,24,26,18};
    int soma = 0, media = 0, i;

    for ( i = 0; i <= 9; i++){
        soma += loud[i];
    }

    printf(" O resultado da soma é: %d\n", soma);

    for ( i = 0; i < 10; i++){
        media += loud[i];
    }

    printf("O resultado da média é: %d\n",(media/10));

    for ( i = 0; i < 10; i++){
        if (loud[i] % 2 == 0){
            printf("%d\n",loud[i]);
        }
        
    }
    
    return 0;
}
```

### Arquivo colecoes_iguais.c

```c
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
```

### Arquivo arr_s_prt1.c

```c
#include <stdio.h>

int main()
{
    int valores[5] = {1, 2, 3, 4, 5};

    printf("Exibindo o primeiro valor: %d\n", valores[0]);
    printf("Exibindo o segundo valor: %d\n", valores[1]);

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Exibindo: %d\n", valores[i]);
    }

    return 0;
}
```

### Arquivo arr_c_ptr1.c

```c
#include <stdio.h>

int main()
{
    int valores[5] = {38, 2, 3, 4, 5};
    int *ptr_valores = valores;

    // printf("%d\n", *ptr_valores);
    // printf("%p\n", ptr_valores);

    int i;

    for ( i = 1; i <= 5; i++)
    {
        printf("O valor é: %d e a posição de memoria é: %p\n",*ptr_valores,ptr_valores);
        ptr_valores++;
    }
    

    return 0;
}
```

### Arquivo pass_por_valor.c

```c
#include <stdio.h>

int subtrair(int x, int y)
{
    printf("Posição de x é: %p\nPosição de y é: %p\n",&x,&y);
    return x - y;
}

int main()
{
    int v1 = 10;
    int v2 = 5;
    printf("Posição de v1 é: %p\nPosição de v2 é: %p\n",&v1,&v2);
    int rs = subtrair(v1, v2);
    printf("O resultedo é: %d\n", rs);
    return 0;
}
```

### Arquivo pass_por_refe.c

```c
#include <stdio.h>

int subtrair(int *x, int *y)
{
    printf("Posição x: %p\nPosição y: %p\n", x, y);
    return *x - *y;
}

int main()
{
    int v1 = 10;
    int v2 = 5;
    printf("Posição de v1: %p\nPosição de v2: %p\n", &v1, &v2);
    int rs = subtrair(&v1, &v2);
    printf("O resultado é: %d\n", rs);
    return 0;
}
```

### Arquivo malloc1.c

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_int;

    ptr_int = (int *)malloc(sizeof(int));

    printf("Endereço reservado %p\n",ptr_int);

    if (ptr_int == NULL)
    {
        printf("Erro:Falha na alocação de memória.\n");

        return 1;//Para a execução do programa
    }

    printf("Digite um número: \n");
    scanf("%d", ptr_int);

    printf("O valor digitado é %d e ele está em %p\n", *ptr_int,ptr_int);

    free(ptr_int);

    return 0;
}
```

### Arquivo malloc2.c

```c
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
```

### Arquivo arquivo.c

```c
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
```