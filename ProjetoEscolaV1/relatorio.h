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

void relatorioProfAluno(pessoa lista[]);
void relatorioDisciplina(disciplina lista[]);
void relatorioProfAlunoPorSexo(pessoa lista[]);
void relatorioInfDisciplina(disciplina lista[], int cod);