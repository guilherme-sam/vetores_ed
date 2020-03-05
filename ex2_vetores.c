#include <stdio.h>
#include <stdlib.h>

//2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
//valores digitados pelo usuário.

int main (){

    int max , Auxmax , i;
    //int v[]= {1,2,3,4,5,6,7,8,9,10};
    int v[10];
    // & = endereço de  (em geral o local onde uma variável está alocada na memória)

    for (i = 0; i < 10; i++){
        printf ("\n por gentiliza digite algum valor ");
        scanf ("%d",&v[i]);
    }
    max = v[0];

    for (i = 0; i < 10 ; i++){
        if ( v[i] > max ){
            max = v[i];
        }
    }

    printf("\n o maior elemento do vetor é %d ", max);
  
    return 0;
}