#include <stdio.h>

// Faça um programa que leia três valores e apresente o maior dos três valores
// lidos seguido da mensagem “eh o maior”

int main(void) {
    double A = 100;
    double B = 70;
    double C = 12;
    double D = 300;
    double maior;

    if (A > B) {
        maior = A;
    } else {
        maior = B;
    }
    if(maior<C) {
        maior = C;
    }

    printf("%lf", maior);
}