
#include <stdio.h>
#include <string.h>
#include "validacao.h"
#include "relatorio.h"
typedef struct{
        int matricula;
        char nome[50];
        char dataDeNascimento[13];
        char cpf[15];
        char sexo[1];
    } pessoa;

    /*typedef struct{
        int matricula;
        char nome[50];
        char dataDeNascimento[13];
        char cpf[15];
        char sexo[1];
    } professor;
    */
    typedef struct{
        int codigo;
        char nome[50];
        char professor[50];
        int semestre;
    } disciplina;
int main()
{
    
    
    int opcao;
    pessoa listaAlunos[40] = {0};
    pessoa listaProfessor[20];
    disciplina listaDisciplina[15];
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
        printf(" 1-Opções aluno\n 2-Opções professor\n 3-Opções disciplina\n");
        scanf("%d", &opcao);
        switch(opcao){
           
            case 1:
                do{
                    printf(" 1-cadastrar \n 2-editar\n 3-deletar\n 0-exit \n");
                    scanf("%d", &opcaoSub);
                    switch(opcaoSub){
                        case 1:
                            printf("Digite o nome:");
                            scanf("%s", &listaAlunos[indexAluno].nome);
                           
                            do{
                                printf("Digite o cpf(000.000.000-00):");
                                scanf("%s", &listaAlunos[indexAluno].cpf);
                                valCpf = validarCpf(listaAlunos[indexAluno].cpf);
                            }
                            while(valCpf == 0);
                            
                            do{
                                printf("Digite a data de nascimento(00/00/0000):");
                                scanf("%s", &listaAlunos[indexAluno].dataDeNascimento);
                                valData = validarData(listaAlunos[indexAluno].dataDeNascimento);
                            }
                            while(valData == 0);
                            
                            printf("Digite o sexo(M/F):");
                            scanf("%s", &listaAlunos[indexAluno].sexo);
                            listaAlunos[indexAluno].matricula = indexAluno + 1;
                            indexAluno++;
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
            
           /* case 2:
                do{
                    printf(" 1-cadastrar \n 2-editar\n 3-deletar\n 0-exit");
                    scanf("%d", &opcaoSub);
                    switch(opcaoSub){
                        case 1:
                            printf("Digite o nome:");
                            scanf("%s", &listaProfessor[indexProfessor].nome);
                            
                            do{
                                printf("Digite o cpf(000.000.000-00):");
                                scanf("%s", &listaProfessor[indexProfessor].cpf);
                                valCpf = validarCpf(listaProfessor[indexProfessor].cpf);
                            }
                            while(valCpf == 0);
                            
                            do{
                                printf("Digite a data de nascimento(00/00/0000):");
                                scanf("%s", &listaProfessor[indexProfessor].dataDeNascimento);
                                valData = validarData(listaProfessor[indexProfessor].dataDeNascimento);
                            }
                            while(valData == 0);
                            
                            printf("Digite o sexo(M/F):");
                            scanf("%s", &listaProfessor[indexProfessor].sexo);
                            listaProfessor[indexProfessor].matricula = indexProfessor;
                            indexProfessor++;
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
                            printf("Digite o Professor:");
                            scanf("%s", listaDisciplina[indexDisciplina].professor);
                            printf("Digite o Nome da disciplina:");
                            scanf("%s", &listaDisciplina[indexDisciplina].nome);
                            printf("Digite o semestre");
                            scanf("%d", &listaDisciplina[indexDisciplina].semestre); 
                            listaDisciplina[indexDisciplina].codigo = indexDisciplina;
                            indexDisciplina++;
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
            */
            
            case 2:
                printf("lista de alunos:");
                printf("\n");
                
                relatorioProfAluno(listaAlunos);
            break;
            /*
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
            */
        }
        
        
        
        
    }
    while(opcao != 0);
}


