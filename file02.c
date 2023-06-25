#include <stdio.h>

// Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A
// e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
// apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
// especificado e não esqueça de imprimir o fim de linha após o resultado.

int main(void) {

  int A;
  int B;
  int X;
  printf("Informe o valor de A: ");
  scanf("%d",&A);
  printf ("Informe o valor de B: ");
  scanf("%d",&B);
  X = A + B;
  printf("%d",X);
  
}