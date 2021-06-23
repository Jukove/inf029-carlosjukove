#include <stdio.h>
#include"funcoes.h"

int fatorial(int n)
{
	if (n) 
  	  return n * fatorial(n-1);
	else return 1;
}


int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return (fibonacci(n-1) + fibonacci(n-2));
}

int invNum;
int inverter(int n){
   if(n > 0){
    int restoNum = n % 10;
    invNum = invNum * 10 + restoNum; 
    int teste = invNum;
    inverter(n /= 10);
   }
    else
         return 0;
    return invNum;

}

int somarVetor(int *vetor, int tam){
    
    if(tam == 1){
        return vetor[tam-1];
    }
    return vetor[tam - 1] + somarVetor(vetor, tam-1);
}

int somar(int n){
    if(n == 1)
        return 1;
    return n + somar(n - 1);
}

int cont = 0;
int ocorrencia(int n, int dig){
    if(n > 0){
        int restoNum = n % 10;
        if(restoNum == dig)
            cont = cont + 1;
            int t = cont;
        ocorrencia(n /= 10, dig);
    }
    return cont;
}

int printCresc(int n, int ini){
    if(ini == n){
        printf("%d \n", ini);
        return 0;
    }
    printf("%d ", ini);
    printCresc(n, ini + 1);
}

int multiRec(int fator, int num ){
    if(fator == 0){
        return 0;
    }
    return num + multiRec(fator - 1, num);
        
}

int printDesc(int n){
    if(n == 0){
        printf("%d \n", n);
        return 0;
    }
    printf("%d ", n);
    printDesc(n - 1);
}

int multInterv(int ini, int final, int inc){
    if(ini <= final){
        printf("%d", ini);
        multInterv(ini + inc, final, inc);
    }
    return 0;
}

int func(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    return((2 * func(n - 1)) + (3 * func (n - 2)));
}

int somarSeq(int n){
    if(n == 0){
       return 0;
    }
     int restoNum = n % 10;
     return restoNum + somarSeq(n /= 10);
}
int sum = 0;
int mediaVetor(int *vetor, int tam, int atual){
    if(atual > 0){
        int t = ((vetor[atual -1 ] +sum) / tam);
        sum = sum + vetor[atual - 1];
        int s = sum;
        mediaVetor(vetor, tam, atual -1);
    }
    int m = sum;
    return sum  / tam ;
}

int pot(int n, int atual){
    if(atual == 0)
        return 1;
    return n * pot(n, atual - 1);
}

int fatorialDuplo(int n){
    if(n == 2)
        return 1;
    else if(n % 2 == 0){
        return (n - 1) * fatorialDuplo(n - 2);
    }
    else
        return n * fatorialDuplo(n - 1);
}
