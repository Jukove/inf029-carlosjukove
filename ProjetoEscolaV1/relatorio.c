#include <stdio.h>
#include <string.h>

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

void relatorioProfAluno(pessoa lista[]){
        for(int index = 0; index < 40; index++){
            if(lista[index].matricula != 0){
                printf("Matricula |-------| Nome |-------| CPF |-------| Data de nascimento |-------| sexo \n");
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s", lista[index].matricula, lista[index].nome, lista[index].cpf, lista[index].dataDeNascimento, lista[index].sexo);
            }
        }
    }
    
void relatorioDisciplina(disciplina lista[]){
    for(int index = 0; index < 15; index++){
        if(lista[index].codigo != 0){
            printf("Código |-------| Nome |-------| Professor |-------| Semestre |-------|");
            printf("%d |-------| %s |-------| %s |-------| %d", lista[index].codigo, lista[index].nome, lista[index].professor, lista[index].semestre);
        }
    }
}

void relatorioProfAlunoPorSexo(pessoa lista[]){
        for(int index = 0; index < 40; index++){
            if(lista[index].matricula != 0 && (lista[index].sexo == 'M' || lista[index].sexo == 'm')){
                printf("Matricula |-------| Nome |-------| CPF |-------| Data de nascimento |-------| sexo");
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s", lista[index].matricula, lista[index].nome, lista[index].cpf, lista[index].dataDeNascimento, lista[index].sexo);
            }
        }
        
        for(int index = 0; index < 40; index++){
            if(lista[index].matricula != 0 && (lista[index].sexo == 'F' || lista[index].sexo == 'f')){
                printf("Matricula |-------| Nome |-------| CPF |-------| Data de nascimento |-------| sexo");
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s", lista[index].matricula, lista[index].nome, lista[index].cpf, lista[index].dataDeNascimento, lista[index].sexo);
            }
        }
    }

void relatorioInfDisciplina(disciplina lista[], int cod){
    for(int index = 0; index < 40; index ++){
        if(lista[index].codigo == cod ){
            printf("Código |-------| Nome |-------| Professor |-------| Semestre |-------|");
            printf("%d |-------| %s |-------| %s |-------| %d", lista[index].codigo, lista[index].nome, lista[index].professor, lista[index].semestre);
        }
        else if(index == 40){
            printf("Disciplina não encontrada");
        }
    }
}
