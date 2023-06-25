// Faça um programa que mostre os números pares entre 1 e 100.

#include<stdio.h>

int main(void){

int x;
int resto;
int loop;

for (loop = 1; loop <= 100; loop++){
   
    x = loop / 2;  
    resto = 2 * x - loop;

    if (resto==0){
        printf("O %d é par\n",loop);
    } 
}

}
