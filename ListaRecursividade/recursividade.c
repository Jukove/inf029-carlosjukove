#include <stdio.h>
#include "funcoes.h"
#include <unistd.h> 
int main()
{   
    int vetor[] = {2,2,8};
    int vetorMedia[] = {2,2,8};
    int t;
    printf("Atividade 1: %d\n", fatorial(5));
    printf("Atividade 2: %d\n", fibonacci(5));
    printf("Atividade 3: %d\n", inverter(5));
    printf("Atividade 4: %d\n", somarVetor(vetor, 3));
    printf("Atividade 5: %d\n", somar(5));
    printf("Atividade 6: %d\n", pot(5, 5));
    printf("Atividade 10: %d\n", ocorrencia(122345, 2));
    printf("Atividade 11: %d\n", multiRec(5, 5));
    printf("Atividade 12:" );
    printCresc(10, 0);
    printf("Atividade 13: ");
    printDesc(10);
    printf("Atividade 16: %d\n", fatorialDuplo(5));
    printf("Atividade 35:");
    multInterv(1, 10, 2);
    printf("\n");
    printf("Atividade 40:%d\n", func(5));
    printf("atividade 45: %d\n", somarSeq(123));
    printf("Atividade 46: %d\n", mediaVetor(vetorMedia, 3, 3));
    scanf("%d", &t);

    return 0;
}