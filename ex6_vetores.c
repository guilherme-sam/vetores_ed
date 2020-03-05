#include <stdio.h>
#include <stdlib.h>

//6) Escreva um programa que preenche um vetor de 10 posições com valores digitados
//pelo usuário. Declare um outro vetor que deverá conter esses mesmos valores, só que
//sem repetições.

int main (){

    int v1[10];
    int v2[10];
    int i,j,k;

    for (i = 0; i < 10; i++){
        printf ("\n por gentiliza digite algum valor ");
        scanf ("%d",&v1[i]);
    }

    v2[0] = v1[0];
    for (i=0 ; i < 10 ; ++i){
        for (j=i+1 ; j<10; j++){
            if (v1[i] = v1[j]){
                //v2[k=i+1] = v1[j];
                v1[i]= -1;
                }
            }
            
            
    }
    for (i=0 ; i < 10 ; ++i){
        for (j=i+1 ; j<10; j++){
            if (v1[i] != -1 ){
                v2[i] = v1[i];
            }
        }
    }

    




    for ( i = 0; i < 10 ; i++){
        printf ("\n %d ",v2[i]);
    }
    


    return 0 ; 
}