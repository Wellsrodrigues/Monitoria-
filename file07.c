//Vetores

// Faça um programa que leia um vetor X[10]. Substitua a seguir,
// todos os valores nulos e negativos do vetor X por 1. 
// Em seguida mostre o vetor X.


#include<stdio.h>

    // X[0] -> Primeira posição
    // X[5] = 90;
    // X[tam-1]

    // soma = 3 + X[3]
    // soma = ?
int main (void){
    int X[10] = {1,2,3,4,-4,0,9,0,5,-1};
    int A;

    for (A=0; A <=9; A++){
        if (X[A] <= 0){
            X[A] = 1;
        }
    }

    for (A=0; A <=9; A++) {
        printf("%d\n",X[A]);
    }

}
