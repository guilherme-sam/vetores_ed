#include <stdio.h>
#include <stdlib.h>

//4) Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
//usuário.

int main (){

    int aux , j  , i;
    // i = anterior j = próximo
    // (teste) int v[]= {12,52,73,34,685,64,76,88,39,180,44,765,657,213,98,45,234,876,214,32,65,876,324,123,876,34,456,654,654,76,345,876,23,56,98,654,765,789,345,398};
    int v[40];

    for (i = 0; i < 40; i++){
        printf ("\n por gentiliza digite algum valor ");
        scanf ("%d",&v[i]);
    }

    for ( i = 0; i < 40; i++){//vai fazer a leitura  de todo vetor 
        for ( j = (i+1) ; j < 40; j++){//vai fazer o vetor todo + 1 em relação ao anterior 
            if (v[i] > v[j] ){ // se o vetor i que é o anterior for maior que o proximo faça isso
                aux = v[i]; // auxiliar recebe o vetor i em questão 
                v[i]= v[j]; // i em questão recebe o proximo
                v[j] = aux; // e o proximo recebe o auxiliar fazendo uma troca 
            }
        }
        
    }
    
    for (i=0 ; i<40 ; i++){
        printf ("\n °%d é : %d ", i+1, v[i]);
    }



    return 0 ;
}