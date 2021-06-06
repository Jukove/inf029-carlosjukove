#ifndef tipo_h
#define tipo_h "struct.h"
#include tipo_h
#endif
#include "cadastrar.h"
#include <stdio.h>
#include <string.h>
#include "validacao.h"

void cadastrar(pessoa pessoas[], int *index){
    
    int valCpf;
    int valData;
    printf("Digite o nome:");
    scanf("%s", pessoas[*index].nome); 
    do{
        printf("Digite o cpf(000.000.000-00):");
        scanf("%s",pessoas[*index].cpf);     
        valCpf = validarCpf(pessoas[*index].cpf);
    }
    while(valCpf == 0);
    do{
        printf("Digite a data de nascimento(00/00/0000):");
        scanf("%s", &pessoas[*index].dataDeNascimento);
        valData = validarData(pessoas[*index].dataDeNascimento);
    }
    while(valData == 0);
    printf("Digite o sexo(M/F):");
    scanf("%s", &pessoas[*index].sexo);
    pessoas[*index].matricula = *index + 1;
    *index = *index + 1;
}

void cadastrarDisc(disciplina lista[], int *indexDisciplina){
    
    printf("Digite o Professor:");
    scanf("%s", lista[*indexDisciplina].professor);
    printf("Digite o Nome da disciplina:");
    scanf("%s", &lista[*indexDisciplina].nome);
    printf("Digite o semestre");
    scanf("%d", &lista[*indexDisciplina].semestre); 
    lista[*indexDisciplina].codigo = *indexDisciplina + 1;
    *indexDisciplina = *indexDisciplina + 1 ;
}
