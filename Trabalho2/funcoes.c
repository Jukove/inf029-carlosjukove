#ifndef tipo_h
#define tipo_h "estrutura.h"
#include tipo_h
#endif
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
void *inserir(no **vetor){
        int tam;
        int posicao;
        int elemento;
        
        printf("Digite a posicao de inserçao:\n");
        scanf("%d", &posicao);
        printf("Digite o elemento de inserçao:\n");
        scanf("%d", &elemento);
        if((vetor[posicao]) == NULL){
            printf("digite tamanho do vetor:");
            scanf("%d", &tam);
            no *reg = (no*) malloc(sizeof(no));
            reg->elemento = elemento;
            reg->tamanho = tam;
            reg->posicaoAtual = 1;
            reg->ocupados = 1;
            reg->prox = NULL;
            vetor[posicao] = reg;
            
            
        }
        else{
            if(vetor[posicao]->ocupados == vetor[posicao]->tamanho){
                printf("Estrutura cheia!\n");
                
            }
            else{
                for(no *p = vetor[posicao]; p != NULL; p = p->prox){
                    if(p->prox == NULL){
                        
                        no *reg = (no*) malloc(sizeof(no));
                        reg->elemento = elemento;
                        reg->posicaoAtual = p->posicaoAtual + 1;
                        reg->prox = NULL;
                        p->prox = reg;
                        vetor[0]->ocupados = vetor[0]->ocupados + 1;
                        break;
                    }
                }
            }
        }
       
    }
    
void listarEstrutura(no **vetor){
    for(int index = 0; index <= 9; index++){
       for(no *p = vetor[index]; p != NULL; p = p->prox){
            if(p->posicaoAtual == 1){
                printf("Posicao estrutura principal: %d\n", index);
                printf("Tamanho da estrutura Auxiliar: %d \n", p->tamanho);
            }
            printf("Elemento: %d \n", p->elemento);
        }
    }
}

void listarOrdEstAuxiliar(no **vetor){
    for(int index = 0; index <= 10; index++){
        if(vetor[index] != NULL){
            int tamanho = vetor[index]->tamanho;
            int vetorSort[tamanho];
            int aux = 0;
            int indexIns = 0;
            for(no *p = vetor[index]; p != NULL; p = p->prox){
                int e = p->elemento;
                vetorSort[indexIns] = p->elemento;
                indexIns++;
            }
            if(indexIns > 1){
                for(int indexSort = 0; indexSort <= indexIns -1; indexSort++){
                    for(int indexSortInt = 0; indexSortInt <= indexIns - 1; indexSortInt++){   
                        
                        if (vetorSort[indexSort] < vetorSort[indexSortInt])
                        {
                            int s =vetorSort[indexSortInt];
                            aux = vetorSort[indexSort];
                            vetorSort[indexSort] = vetorSort[indexSortInt];
                            vetorSort[indexSortInt] = aux;
                        }
                    }
                }
            }
            printf("Elementos ordenados da estrutura auxiliar %d\n", index);
            for(int indexPt = 0; indexPt <= indexIns - 1; indexPt++){
                int pr = vetorSort[indexPt];
                printf("%d \n", vetorSort[indexPt]);
            }
        }
    }
}

void listarOrdCompt(no **vetor){
    int tamanho = 0;
    int aux = 0;
    for(int index = 0; index <= 9; index++){
        if(vetor[index] != NULL)
            tamanho = tamanho + vetor[index]->tamanho;
    }
    int vetorSort[tamanho];
    int indexIns = 0;
        for(int indexVetor = 0; indexVetor <= 9; indexVetor++){
            if(vetor[indexVetor] != NULL){
            for(no *p = vetor[indexVetor]; p != NULL; p = p->prox){
                vetorSort[indexIns] = p->elemento;
                indexIns++;
            }
            }
        }
    if(indexIns > 1){
        for(int indexSort = 0; indexSort <= indexIns - 1; indexSort++){
            for(int indexSortInt = 0; indexSortInt <= indexIns -1; indexSortInt++){                
                if (vetorSort[indexSort] < vetorSort[indexSortInt])
                {
                    aux = vetorSort[indexSort];
                    vetorSort[indexSort] = vetorSort[indexSortInt];
                    vetorSort[indexSortInt] = aux;
                }
            }
        }
    }
    printf("Elementos ordenados da estrutura principal:\n");
    for(int indexPt = 0; indexPt <= indexIns - 1; indexPt++){
         int pr= vetorSort[indexPt];
            printf("%d \n", vetorSort[indexPt]);
    }
}

void aumentarVetor(no **vetor){
    int posicao;
    int tam;
    
    printf("Digite posicao:");
    scanf("%d",&posicao);
    printf("Digite o tamanho para adicionar:");
    scanf("%d",&tam);
    if(vetor[posicao] != NULL) 
        vetor[posicao]->tamanho = vetor[posicao]->tamanho + tam;
    else
        printf("Posicao nao foi iniciada");
}

void excluirElemento(no **vetor){
    int elemento;
    int posicao;
    no * pTemp = NULL;
    printf("Digite posicao no vetor:");
    scanf("%d",&posicao);
    printf("Digite elemento para excluir:");
    scanf("%d",&elemento);
    for(no *p = vetor[posicao]; p != NULL; p = p->prox){
        if(pTemp == NULL && p->elemento == elemento)
            vetor[posicao] = p->prox;
        else if(pTemp != NULL && p->elemento == elemento) {
            pTemp->prox = p->prox;
            break;
        }
        pTemp = p;
    }
}