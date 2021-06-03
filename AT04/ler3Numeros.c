#include <stdio.h>

int main()
{
    int vetorResult[3];
    popularVetor(vetorResult);
   
    printf("O resultado é: %d %d %d", vetorResult[0], vetorResult[1], vetorResult[2]);
    return 0;
}

int popularVetor (int vetorResult[]){
    int getPValor, getSValor, getTValor;
    printf("digite o primeiro valor:");
    scanf("%d", &vetorResult[0]);
    printf("digite o segundo valor:");
    scanf("%d", &vetorResult[1]);
     printf("digite o terceiro valor:");
    scanf("%d", &vetorResult[2]);    
}