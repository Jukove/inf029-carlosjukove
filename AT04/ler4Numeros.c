typedef struct{
        int vetorResult[4];
    }Vetor;
#include <stdio.h>

int main()
{
    
    Vetor result;
    ler4Numeros(&result);
   
    printf("O resultado é: %d %d %d %d", result.vetorResult[0], result.vetorResult[1], result.vetorResult[2], result.vetorResult[3]);
    return 0;
}

int ler4Numeros (Vetor *vetor){
    
    printf("digite o primeiro valor:");
    scanf("%d", &vetor->vetorResult[0]);
    printf("digite o segundo valor:");
    scanf("%d", &vetor->vetorResult[1]);
    printf("digite o terceiro valor:");
    scanf("%d", &vetor->vetorResult[2]); 
    printf("digite o quarto valor:");
    scanf("%d", &vetor->vetorResult[3]); 
}