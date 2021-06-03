
#include <stdio.h>

int main()
{
    int result;
    int getValor;
    printf("digite o  valor:");
    scanf("%d", &getValor);   
    result = fatorial(getValor);
    if(result == 0)
        printf("Valor menor que 0");
    else    
        printf("O resultado é: %d", result);
    return 0;
}

int fatorial (int fatorial){
    if(fatorial < 0)
        return 0;
    if(fatorial == 1 || fatorial == 0)
        return 1;
        
    int result = 1;

    for(int index = fatorial; index > 1; index -= 2){
        result = result * (index*( index - 1));
    }
    return result;
}