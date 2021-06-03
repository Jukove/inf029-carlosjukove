#include <stdio.h>

int main()
{
    int result;
    int getPValor, getSValor;
    printf("digite o primeiro valor:");
    scanf("%d", &getPValor);
    printf("digite o segundo valor:");
    scanf("%d", &getSValor);
    result = soma(getPValor, getSValor);
    printf("O resultado é: %d", result);
    return 0;
}

int soma (int pValor, int sValor){
    int result = pValor + sValor;
    return result;
}