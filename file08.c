// Faça um programa que leia um vetor Notas[10]. 
// No final, mostre todas as posições do vetor que 
// armazenam um valor menor ou igual a 7
//  e o valor armazenado em cada uma das posições.

#include<stdio.h> 
int main (void){
    double Notas[10];
    int A;
for (A=0;A <=9;A++){
    printf ("Adicione as notas :");
    scanf ("%lf",&Notas[A]);
}
for (A=0;A <=9;A++){
    if (Notas[A] <= 7){
        printf(" Notas :%lf\n Posições:%d",Notas[A],A);

    }
    
}



}