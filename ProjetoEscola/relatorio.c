#include "relatorio.h"
void relatorioProfAluno(pessoa listaProfAluno[]){
        printf("Matricula |-------| Nome |-------| CPF |-------| Data de nascimento |-------| sexo \n");

        for(int index = 0; index < 40; index++){
            if(listaProfAluno[index].matricula != 0){
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s \n", listaProfAluno[index].matricula, listaProfAluno[index].nome, listaProfAluno[index].cpf, listaProfAluno[index].dataDeNascimento, listaProfAluno[index].sexo);
            }
        }
    }
    
void relatorioDisciplina(disciplina lista[]){
    printf("Código |-------| Nome |-------| Professor |-------| Semestre |-------| \n");

    for(int index = 0; index < 15; index++){
        if(lista[index].codigo != 0){
            printf("%d |-------| %s |-------| %s |-------| %d \n", lista[index].codigo, lista[index].nome, lista[index].professor, lista[index].semestre);
        }
    }
}

void relatorioProfAlunoPorSexo(pessoa lista[]){
    printf("Matricula |-------| Nome |-------| CPF |-------| Data de nascimento |-------| sexo \n");
        for(int index = 0; index < 40; index++){
            if(lista[index].matricula != 0 & (lista[index].sexo == 'M' || lista[index].sexo == 'm')){                
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s \n", lista[index].matricula, lista[index].nome, lista[index].cpf, lista[index].dataDeNascimento, lista[index].sexo);
            }
        }
        
        for(int index = 0; index < 40; index++){
            if(lista[index].matricula != 0 & (lista[index].sexo == 'F' || lista[index].sexo == 'f')){                
                printf("%d |-------| %s |-------| %s |-------| %s |-------| %s \n", lista[index].matricula, lista[index].nome, lista[index].cpf, lista[index].dataDeNascimento, lista[index].sexo);
            }
        }
    }

void relatorioInfDisciplina(disciplina lista[], int cod){
    printf("Código |-------| Nome |-------| Professor |-------| Semestre |-------| \n");
    for(int index = 0; index < 40; index ++){
        if(lista[index].codigo == cod ){            
            printf("%d |-------| %s |-------| %s |-------| %d \n", lista[index].codigo, lista[index].nome, lista[index].professor, lista[index].semestre);
        }
        else if(index == 40){
            printf("Disciplina não encontrada");
        }
    }
}
