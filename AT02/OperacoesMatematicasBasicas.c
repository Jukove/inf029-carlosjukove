/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float somar(float valor[]);
float subtrair(float valor[]);
float multiplicar(float valor[]);
float dividir();
int main()
{
    float result;
    float valor[4];
    int opcao;
    do{
        printf("Escolha uma das opções:\n");
        printf("0-sair \n 1-somar \n 2- subtrair \n 3- multiplicar \n 4-dividir \n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                result = somar(valor);
                printf("O resultado: %.2f \n", result);
                result = 0;
            break;
            case 2:
                result = subtrair(valor);
                printf("O resultado: %.2f \n", result);
                result = 0;
            break;
            case 3:
                 result = multiplicar(valor);
                printf("O resultado: %.2f \n", result);
                result = 0;
            break;
            case 4:
                result = dividir();
                printf("O resultado: %.2f \n", result);
                result = 0;
            break;
        }
    }
    while(opcao != 0);
}

float somar(float valor[]){
    int index = 0;
    float total = 0;
    do{
        printf("digite o valor a ser somado ou zero para resultado: ");
        scanf("%f", &valor[index]);
        total += valor[index];
        int v = valor[index];
        index ++;
        
    }
    while(valor[index -1] != 0 && index < 4);
    for(index = 0; index < 4; index++){
        valor[index] = 0;
    }
    return total;
}

float subtrair(float valor[]){
    int index = 0;
    float total = 0;
    do{
        printf("digite o valor a ser subtraído ou zero para resultado: ");
        scanf("%f", &valor[index]);
        if(index == 0)
            total += valor[index];
        else
            total -= valor[index];
        index ++;
        
    }
    while(valor[index -1] != 0 && index < 4);
    for(index = 0; index < 4; index++){
        valor[index] = 0;
    }
    return total;
}

float multiplicar(float valor[]){
    int index = 0;
    float total = 1;
    do{
        printf("digite o valor a ser multiplicado ou zero para resultado: ");
        scanf("%f", &valor[index]);
        total *= valor[index];
        index ++;
        
    }
    while(valor[index -1] != 0 && index < 4);
    for(index = 0; index < 4; index++){
        valor[index] = 0;
    }
    return total;
}

float dividir(){
    float pValor, sValor;
    printf("digite o primeiro número para divisão: \n");
    scanf("%f", &pValor);
    printf("digite o segundo número para divisão: \n");
    scanf("%f", &sValor);
    float result = pValor/sValor;
    return result;
}