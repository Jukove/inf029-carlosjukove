#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#ifndef tipo_h
#define tipo_h "struct.h"
#include tipo_h
#endif
#include "validacao.h"

int validarData(char data[]){
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
        
        if(index > 5 && index < 10){
            
            for(int indexL = 0; index <=10 ; indexL++ ){
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
}

int validarCpf(char cpf[]){
    char numLista[11] = "0123456789";
    for(int index = 0; index <= 13; index++){
        for(int indexL = 0; indexL <=10 ; indexL++ ){
            if(index != 3 && index != 7 && index != 11){
                if(cpf[index] == numLista[indexL]){
                    break;
                }
                else if(numLista[indexL] == '9'){
                    return 0;
                }
            }
            else if(index == 11){
                if(cpf[index] == '-'){
                    break;
                }
                else{
                    return 0;
                }
            }
            else if(index == 3 || index == 7){
                if(cpf[index] == '.'){
                    break;
                }
                else if(cpf[index] != '.'){
                    return 0;
                }
            }
            
        }
    }
    return 1;
}
