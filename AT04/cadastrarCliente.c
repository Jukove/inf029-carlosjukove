#include <stdio.h>

int main()
{
    char caracter[4][10];
    cadastrarCliente(caracter);
   
    printf("Nome completo: %s\n", caracter[0]);
    printf("Data de nascimento: %s\n", caracter[1]);
    printf("CPF: %s\n", caracter[2]);
    printf("Sexo: %s\n", caracter[3]);
    return 0;
}

int cadastrarCliente (char vetorResult[][10]){
    printf("digite o nome completo:");
    scanf("%s", &vetorResult[0][0]);
    printf("digite a data de nascimento:");
    scanf("%s", &vetorResult[1][0]);
    printf("digite o CPF:");
    scanf("%s", &vetorResult[2][0]);   
    printf("digite o sexo:");
    scanf("%s", &vetorResult[3][0]);   
}