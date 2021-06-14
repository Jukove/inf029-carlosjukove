// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "carlosjukove2017116009.h" // Substitua pelo seu arquivo de header renomeado

/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}

/*typedef struct DQ
{
    char sDia [3];
    char sMes [3];
    char sAno [3];
    int valido; // 0 se inválido, e 1 se válido 
} DataQuebrada;
DataQuebrada quebraData(char *data){
    //[ 1 , 2  ,  /  ,    ,   ,  /  ,    ,     ,    ,      ,]
}*/
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char *data){
    char digito;
    char dia[3] = {data[0], data[1]};
    char mes[3] = {data[3], data[4]};
    char ano[5] = {data[6], data[7], data[8], data[9]};
    int diaInt;
    int mesInt;
    int anoInt;
    char numLista[11] = "01234556789";
    
    if(data[2] != '/' || data[5] != '/'){
        return 0;
    }
    for(int index = 0; index <= 10; index++){
        if(index < 2){
            
            for(int indexL = 0; index <=10 ; indexL++ ){
              if(data[index] == numLista[indexL]){
                  break;
              }
              else if(numLista[indexL] == '\0'){
                  return 0;
              }
            }
        }
        if(index > 2 && index < 5){
            
            for(int indexL = 0; index <=10 ; indexL++ ){
              if(data[index] == numLista[indexL]){
                  break;
              }
              else if(numLista[indexL] == '\0'){
                  return 0;
              }
            }
        }
        
        if(index > 5 && index <= 10){
            
            for(int indexL = 0; index <= 10 ; indexL++ ){
              if(data[index] == numLista[indexL]){
                  break;
              }
              else if(numLista[indexL] == '\0'){
                  return 0;
              }
            }
        }
    }
    diaInt = atoi(dia);
    mesInt = atoi(mes);
    anoInt = atoi(ano);
    
    if(anoInt >= 1900 && anoInt <= 2021){
        if((mesInt >= 1 &&  mesInt <= 7 && mesInt % 2 != 0) || (mesInt >= 8 && mesInt <= 12 && mesInt % 2 == 0)){
            if(diaInt >= 1 || mesInt <= 31){
                return 1;
            }
            else{
                return 0;
            }
        }
        else if(mesInt % 2 != 0){
            if(diaInt >= 1 || mesInt <= 30){
                return 1;
            }
            else{
                return 0;
            }
        }
        else if(mesInt == 2){
           if((anoInt % 4 == 0 && anoInt % 100 != 0) || anoInt % 400 == 0){ 
               if(diaInt >= 1 && diaInt <= 29){
                   return 1;
               }
               else{
                   return 0;
               }
           } 
           else if(diaInt >=1 && diaInt <= 28){
               return 1;
           }
           else{
               return 0;
           }
        }
    }
    else
        return 0;
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *dataInicial, char *dataFinal, int *dia, int *mes, int *ano){
    if(!q1(dataInicial)){
        return 2;
    }
    if(!q1(dataFinal)){
        return 3;
    }
    char diaIni[3] = {dataInicial[0], dataInicial[1]};
    char mesIni[3] = {dataInicial[3], dataInicial[4]};
    char anoIni[5] = {dataInicial[6], dataInicial[7], dataInicial[8], dataInicial[9]};
    int diaIntIni = atoi(diaIni);
    int mesIntIni = atoi(mesIni);
    int anoIntIni = atoi(anoIni);
    char diaFin[3] = {dataFinal[0], dataFinal[1]};
    char mesFin[3] = {dataFinal[3], dataFinal[4]};
    char anoFin[5] = {dataFinal[6], dataFinal[7], dataFinal[8], dataFinal[9]};
    int diaIntFin = atoi(diaFin);
    int mesIntFin = atoi(mesFin);
    int anoIntFin = atoi(anoFin);
    if(anoIntIni > anoIntFin){
        return 4;
    }
    else if(anoIntIni == anoIntFin && mesIntIni > mesIntFin ){
        return 4;
    }
    else if(anoIntIni == anoIntFin && mesIntIni == mesIntFin && diaIntIni > diaIntFin){
        return 4;
    }
    
    *ano = anoIntFin - anoIntIni;
    *mes = 12 +(mesIntFin - mesIntIni); 
    if(*ano > 0 && *mes < 12)
        *ano = *ano - 1;
    else if (*ano > 0 && *mes >= 12){
        *mes = *mes - 12;
    }
    
    if(diaIntIni > diaIntFin && *mes > 0){
        *mes = *mes - 1;
        
        if(((mesIntFin - 1) >= 1 &&  (mesIntFin - 1) <= 7 && (mesIntFin - 1) % 2 != 0) || ((mesIntFin - 1) >= 8 && (mesIntFin - 1) <= 12 && (mesIntFin - 1) % 2 == 0)){
           
            *dia = (31 - diaIntIni) + diaIntFin;
        }
        else if((mesIntFin - 1) % 2 != 0){
            *dia = (30 - diaIntIni) + diaIntFin;
        }
        else if((mesIntFin - 1) == 2){
           if((anoIntFin % 4 == 0 && anoIntFin % 100 != 0) || anoIntFin % 400 == 0){ 
               *dia = (29 - diaIntIni) + diaIntFin;
           } 
           else 
               *dia = (28 - diaIntIni) + diaIntFin;
           }
        
    }
    else if(diaIntIni < diaIntFin && *mes >= 0)
        *dia = diaIntFin - diaIntIni;
    
    return 1;
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *text, char letra, int caseSensitive){
    int tam = strlen(text);
    int ocorrencia = 0 ;
    if(caseSensitive){
        for(int index = 0; index < tam; index ++){
            if(text[index] == letra){
                ocorrencia++;
            }   
        }
        return ocorrencia;
    }
    else{
        int p= 0;
        letra = tolower(letra);
        while(p < strlen(text)){
            text[p] = tolower(text[p]);
            p++;
        }
        for(int index = 0; index < tam; index ++){
            if(text[index] == letra){
                ocorrencia++;
            }   
        }
        return ocorrencia;
    }
        
    
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBuscar, int posicao[]){
    int palavraIdent = 0;
    int ocorrencia = -1;
    int indexBuscar = 0;
    int indexPos = 0;

    for(int index = 0; index < strlen(strTexto); index++){
        
            if(strTexto[index] == strBuscar[indexBuscar])
                palavraIdent++;
            if(palavraIdent == strlen(strBuscar)){
                ocorrencia++;
                posicao[indexPos] = (index + 1) -  strlen(strBuscar);
                indexPos++;
                posicao[indexPos] = index;
                indexPos++;
                palavraIdent = 0;
                indexBuscar = 0;
            }
            if(strTexto[index] == ' ' || strTexto[index] == '\0' ||strTexto[index] != strBuscar[index]){
                palavraIdent = 0;
                indexBuscar = 0;
            }
        
        indexBuscar++;
    }
    return ocorrencia;
    
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num){
    int invNum = 0;
    do{

        int restoNum = num % 10;
        invNum = invNum * 10 + restoNum; 
        num /= 10;
    }
    while(num !=0);
    printf("Hello World %d", invNum);
    return invNum;

}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca){
    int invNum = 0;
    int ocorrencia = 0;
    do{

        int restoNum = numerobase % 10;
        if(restoNum == numerobusca){
           ocorrencia++;;
        }
        numerobase /= 10;
    }
    while(numerobase != 0);
    return ocorrencia;
    
}