#include<stdio.h>

// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

int main (void){
    char nome [20];
    double salario;
    double vendas;
    double comissao;
    double total;

    printf("Informe o nome do funcionario: ");
    scanf("%s",nome);
    printf("Informe o salario: ");
    scanf("%lf",&salario);
    printf("Informe o valor das vendas: ");
    scanf("%lf",&vendas);

    comissao = vendas * 0.15;
    total = comissao + salario;
    
    printf("%2.lf",total);

return 0;
}
