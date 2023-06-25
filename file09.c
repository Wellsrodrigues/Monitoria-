// Faça um programa que leia um vetor N[5]. 
// Troque a seguir, o primeiro elemento com o último, 
// o segundo elemento com o penúltimo,
// etc. até inverte o vetor N[5]
// Mostre o vetor modificado.


// A[3] = {1,2,3}
// -A[3] = {3,2,1}

#include<stdio.h> 
int main (void){
    double N[5];
    int A;

for (A=0;A <=4;A++){
    printf ("Adicione as notas :");
    scanf ("%lf",&N[A]);
}

for (A = 4; A>=0; A--){
    printf("%lf",N[A]);

}

}