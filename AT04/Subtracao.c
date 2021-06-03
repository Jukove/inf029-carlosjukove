#include <stdio.h>

int main()
{
    int result;
    int getPValor, getSValor, getTValor;
    printf("digite o primeiro valor:");
    scanf("%d", &getPValor);
    printf("digite o segundo valor:");
    scanf("%d", &getSValor);
     printf("digite o terceiro valor:");
    scanf("%d", &getTValor);
    result = subtracao(getPValor, getSValor, getTValor);
    printf("O resultado é: %d", result);
    return 0;
}

int subtracao (int pValor, int sValor, int tValor){
    int result = pValor - sValor - tValor;
    return result;
}