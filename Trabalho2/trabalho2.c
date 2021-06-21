/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "estrutura.h"
#include "funcoes.h"
void *inserir(no **vetor);
int main()
{
    no *vetor[10] = {NULL};
    int opcao;
    do{
        printf(" 1-inserir \n 2-listar todos os valores \n 3-Listar valores ordernado por estrutura \n 4-Listar todos os valores ordenado \n 5- Excluir \n 6- Aumentar tamanho da lista \n 7-Sair\n Digite a opcao:");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                inserir(vetor);
            break;
            case 2:
                listarEstrutura(vetor);
            break;
            case 3:
                listarOrdEstAuxiliar(vetor);
            break;
            case 4:
                listarOrdCompt(vetor);
            break;
            case 5:
                excluirElemento(vetor);
            break;
            case 6:
                aumentarVetor(vetor);
            break;
            
        }
    }
    while(opcao != 0);
    return 0;
}

