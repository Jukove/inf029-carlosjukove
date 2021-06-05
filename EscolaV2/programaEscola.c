/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "relatorio.h"
#include "cadastrar.h"

#define TAM 5
   
    
int main()
{
    
    
    int opcao;
    pessoa listaAlunos[TAM] = {0};
    pessoa listaProfessor[TAM];
    disciplina listaDisciplina[TAM] = {0};
    int indexAluno = 0;
    int indexProfessor = 0;
    int indexDisciplina = 0;
    int opcaoSub;
    int matricula;
    int opcaoEdicao;
    char nome[50];
    char cpf[15];
    char data[12];
    char sexo[1];
    char prof[50];
    int sem;
    int cod;
    int valCpf;
    int valData;
    do {

        system("clear");
        printf("Escolha uma das opções:\n");
        printf(" 1-Opções aluno\n 2-Opções professor\n 3-Opções disciplina\n 4-Lista Aluno \n 5-Lista Professor \n 6-Lista Disciplina");
        scanf("%d", &opcao);
        switch(opcao){
           
            case 1:
                do{
                    printf(" 1-cadastrar \n 2-editar\n 3-deletar\n 0-exit \n");
                    scanf("%d", &opcaoSub);
                    switch(opcaoSub){
                        case 1:
                            cadastrar(listaAlunos, &indexAluno);
                        break;
                        case 2:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaAlunos[index].matricula, listaAlunos[index].nome);
                            }
                            
                            printf("Digite o número da matricula do aluno para alterar informações:");
                            scanf("%d", &matricula);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaAlunos[index].matricula == matricula){
                                    do{
                                        printf("Editar \n 1-nome \n 2-CPF(000.000.000-00) \n 3-data de nascimento 00/00/0000 \n 4-sexo (M/F) 0-exit");
                                        scanf("%d", opcaoEdicao);
                                        switch(opcaoEdicao){
                                            case 1: 
                                                printf("digite o novo nome:");
                                                scanf("%s", &nome);
                                                strcpy(listaAlunos[index].nome, nome);
                                            break;
                                            
                                            case 2:
                                               do{
                                                    printf("digite o novo CPF:");
                                                    scanf("%s", &cpf);
                                                    strcpy(listaAlunos[index].cpf, cpf);
                                                    valCpf = validarCpf(listaAlunos[index].cpf);
                                               }
                                               while(valCpf == 0);
                                            break;
                                            
                                            case 3:
                                                do{
                                                    printf("digite o nova data de nascimento:");
                                                    scanf("%s", &data);
                                                    strcpy(listaAlunos[index].dataDeNascimento, data);
                                                    valData = validarData(listaAlunos[index].dataDeNascimento);
                                                }
                                                while(valData == 0);
                                                
                                            break;
                                            
                                            case 4:
                                                printf("digite o novo sexo:");
                                                scanf("%s", &sexo);
                                                strcpy(listaAlunos[index].sexo, sexo);
                                            break;
                                        }
                                    }
                                    while(opcaoEdicao !=0);
                                }
                            }
                        break;
                        
                        case 3:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaProfessor[index].matricula, listaAlunos[index].nome);
                            }
                            
                            printf("Digite o número da matricula do Professor para alterar informações:");
                            scanf("%d", &matricula);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaAlunos[index].matricula == matricula){
                                    for(int indexL = index; index < 40; indexL++){
                                        if(listaAlunos[indexL + 1].matricula != 0){
                                            listaAlunos[indexL] = listaAlunos[indexL + 1];
                                        }
                                        else{
                                            listaProfessor[indexL] = listaProfessor[indexL + 1];
                                            break;
                                        }
                                    }
                                }
                                break;
                            }
                        break;
                    }
                }
                while(opcaoSub != 0);
            
            case 2:
                do{
                    printf(" 1-cadastrar \n 2-editar\n 3-deletar\n 0-exit");
                    scanf("%d", &opcaoSub);
                    switch(opcaoSub){
                        case 1:
                            cadastrar(listaAlunos, &indexProfessor);
                        break;
                        
                        case 2:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaProfessor[index].matricula, listaProfessor[index].nome);
                            }
                            
                            printf("Digite o número da matricula do aluno para alterar informações:");
                            scanf("%d", &matricula);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaProfessor[index].matricula == matricula){
                                    do{
                                        printf("Editar \n 1-nome \n 2-CPF(000.000.000-00) \n 3-data de nascimento 00/00/0000 \n 4-sexo (M/F) 0-exit");
                                        scanf("%d", opcaoEdicao);
                                        switch(opcaoEdicao){
                                            case 1: 
                                                printf("digite o novo nome:");
                                                scanf("%s", &nome);
                                                strcpy(listaProfessor[index].nome, nome);
                                            break;
                                            
                                            case 2:
                                                do{
                                                    printf("digite o novo CPF:");
                                                    scanf("%s", &cpf);
                                                    strcpy(listaProfessor[index].cpf, cpf);
                                                    valCpf = validarCpf(listaProfessor[index].cpf);
                                                }
                                                while(valCpf == 0);
                                            break;
                                            
                                            case 3:
                                                do{
                                                    printf("digite o nova data de nascimento:");
                                                    scanf("%s", &data);
                                                    strcpy(listaProfessor[index].dataDeNascimento, data);
                                                    valData = validarData(listaProfessor[index].dataDeNascimento);
                                                }
                                                while(valData == 0); 
                                                
                                            break;
                                            
                                            case 4:
                                                printf("digite o novo sexo:");
                                                scanf("%s", &sexo);
                                                strcpy(listaAlunos[index].sexo, sexo);
                                            break;
                                        }
                                    }
                                    while(opcaoEdicao !=0);
                                }
                            }
                        break;
                        
                        case 3:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaProfessor[index].matricula, listaProfessor[index].nome);
                            }
                            
                            printf("Digite o número da matricula do Professor para alterar informações:");
                            scanf("%d", &matricula);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaProfessor[index].matricula == matricula){
                                    for(int indexL = index; index < 40; indexL++){
                                        if(listaProfessor[indexL + 1].matricula != 0){
                                            listaProfessor[indexL] = listaProfessor[indexL + 1];
                                        }
                                        else{
                                            listaProfessor[indexL] = listaProfessor[indexL + 1];
                                            break;
                                        }
                                    }
                                }
                                break;
                            }
                        break;
                    }
                }
                while(opcaoSub != 0);
                            
            break;
            
            case 3:
                do{
                    printf(" 1-cadastrar \n 2-editar\n 3-deletar\n 0-exit");
                    scanf("%d", &opcaoSub);
                    switch(opcaoSub){
                        case 1:
                           cadastrarDisc(listaDisciplina, &indexDisciplina);
                        break;
                        
                        case 2:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaDisciplina[index].codigo, listaDisciplina[index].nome);
                            }
                            
                            printf("Digite o código da disciplina para alterar informações:");
                            scanf("%d", &cod);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaDisciplina[index].codigo == cod){
                                    do{
                                        printf("Editar \n 1-nome da disciplina \n 2-nome do professor\n 3- alterar semestre \n 0-exit");
                                        scanf("%d", opcaoEdicao);
                                        switch(opcaoEdicao){
                                            case 1: 
                                                printf("digite o novo nome:");
                                                scanf("%s", &nome);
                                                strcpy(listaDisciplina[index].nome, nome);
                                            break;
                                            
                                            case 2:
                                                printf("digite o novo nome do Professor:");
                                                scanf("%s", &cpf);
                                                strcpy(listaDisciplina[index].professor, prof);
                                            break;
                                            
                                            case 3:
                                                printf("digite o novo semestre:");
                                                scanf("%s", &data);
                                                listaDisciplina[index].semestre = sem;
                                            break;
                                        }
                                    }
                                    while(opcaoEdicao !=0);
                                }
                            }
                        break;
                        
                        case 3:
                            printf("Matricula |----------------| Nome\n");
                            for(int index = 0; index < 40; index++){
                                printf("%d |----------------| %s", listaDisciplina[index].codigo, listaDisciplina[index].nome);
                            }
                            
                            printf("Digite o número da matricula do Professor para alterar informações:");
                            scanf("%d", &cod);
                            
                            for(int index = 0; index < 40; index++){
                                if(listaDisciplina[index].codigo == cod){
                                    for(int indexL = index; index < 40; indexL++){
                                        if(listaDisciplina[indexL + 1].codigo != 0){
                                            listaDisciplina[indexL] = listaDisciplina[indexL + 1];
                                        }
                                        else{
                                            listaDisciplina[indexL] = listaDisciplina[indexL + 1];
                                            break;
                                        }
                                    }
                                }
                                break;
                            }
                        break;
                    }
                }
                while(opcaoSub != 0);
                            
            break;
            
            case 4:
                printf("lista de alunos:");
                printf("\n");
                
                relatorioProfAluno(listaAlunos);
            break;
            
            case 5: 
                printf("Lista de Professor:");
                relatorioProfAluno(listaProfessor);
            break;
            
            case 6:
                printf("Lista de disciplina");
                relatorioDisciplina(listaDisciplina);
            break;
            
            case 7:
                printf("Lista de alunos por sexo");
                relatorioProfAlunoPorSexo(listaAlunos);
            break;
            
            case 8:
                printf("Lista de Professores por sexo:");
                relatorioProfAlunoPorSexo(listaProfessor);
            break;
            
            case 9:
                relatorioDisciplina(listaDisciplina);
                printf("Digite o código da disciplina para ter informações:");
                scanf("%d", &cod);
                relatorioInfDisciplina(listaDisciplina, cod);
            break;
            
        }
        
        
        
        
    }
    while(opcao != 0);
}


