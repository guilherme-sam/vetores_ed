#include <stdio.h>
#include <stdlib.h>

int main (){
//1) Escreva um programa em C que lê 15 números inteiros e os armazena em um vetor.
//A seguir, o programa exibe cada número seguido da mensagem “par” ou “ímpar”./
    int v[15];
    int i;
    int g;
   
    for (int i = 0; i < 15; i++){
        /* code */
        printf ("\n digite %d o valor ",i+1);
        scanf ("%d",&v[i]); 

    }
     
     for (int i = 0; i < 15; i=i+2){
        printf ("\n v[%d] = %d : %s \n",i,v[i], v[i]%2 == 0 ? "par" : "impar");  

    }
        



    return 0;
};