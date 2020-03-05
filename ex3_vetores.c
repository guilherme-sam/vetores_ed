#include <stdio.h>
#include <stdlib.h>

//3) Escreva um programa em C que encontra a “moda” em um vetor de 20 elementos
//digitados pelo usuário. Na estatística, a moda de uma coleção de valores é aquele que
//aparece com maior frequência, desempatando arbitrariamente.
int main (){ 

    int i , moda , modaAux  ,freq = 1, freqAux = 0;
    moda = v[0];
    int v[]= {1,2,3,4,5,6,7,8,9,2,3,4,4,4,4,6,8,7,9,9,9,9,9}


    for (i = 1 ; i < 10; ++i){
        freq  = v[i]  == moda ? freq + 1 : freq ; 
    
    }

    for (int  i= 1 ; i < 10 ; ++i){
        modaAux = v[i];
        freqAux = 0 ; 
            for (int j = 0 ; j < 10 ; j++ ){
                if (v[j] == modaAux)
                    ++freqAux;
            }
            if (freqAux  > freq ){
                moda = modaAux ;
                freq = freqAux; 
            }
    }

    pritnf ("A moda é %d ,com freqência : %d\n",moda , freq);

    
    return 0;
}
