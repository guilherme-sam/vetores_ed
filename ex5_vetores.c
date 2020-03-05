#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que calcula a média de elementos armazenados em um vetor de 30 posições.

int main (){
    int v[]={1,2,3,4,5,6,7,8,9,10
    ,11,12,13,14,15,16,17,18,19,20
    ,21,22,23,24,25,26,27,28,29,30};
    int soma,i,resultado;

    for (i=0 ; i< 30 ; ++i){
        soma =  soma + v[i];
    }
    //resultado = soma/30;

    printf ("\n A média das 30 posições dos vetores é: %d \n", soma/30); 

    //printf ("\n A média é: %d \n", resultado);

    return 0 ;
}