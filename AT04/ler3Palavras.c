#include <stdio.h>

int main()
{
    char caracter[3][10];
    ler3Letras(caracter);
   
    printf("O resultado é: %s %s %s", caracter[0], caracter[1], caracter[2]);
    return 0;
}

int ler3Letras (char vetorResult[][10]){
    printf("digite o primeiro valor:");
    scanf("%s", &vetorResult[0][0]);
    printf("digite o segundo valor:");
    scanf("%s", &vetorResult[1][0]);
    printf("digite o terceiro valor:");
    scanf("%s", &vetorResult[2][0]);    
}