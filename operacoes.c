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
