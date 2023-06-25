
#include<stdio.h>

// 1 - hotdog - 4.50
// 2 - sanduiche - 5.00
// 3 - sorvete - 2.00
// 4 - Batata - 3.00
// 5 - Suco - 2.00

int main(void){
    int opcao;
    int quantidade;
    double preco;
    double valor;
    int sair = 1;

    while (sair==1)
    {

    printf("Escolha uma opção: \n1-hotdog\n 2-sanduiche\n 3-sorvete\n 4-Batata\n 5-suco\n");
    printf("Informe uma opção:");
    scanf("%d",&opcao);
    printf("Informe a quantidade:");
    scanf("%d",&quantidade);

    switch (opcao){
    case 1:
        preco = 4.5;
        valor = preco * quantidade;
        printf("O valor total será :%.2lf\n ",valor);
    break;
    
    case 2:
        preco = 5.0;
        valor = preco * quantidade;
        printf("O valor total será :%.2lf\n ",valor);
    break;
    case 3:
        preco = 2.0;
        valor = preco * quantidade;
        printf("O valor total será :%.2lf\n ",valor);
    break;
    case 4:
        preco = 3.0;
        valor = preco * quantidade;
        printf("O valor total será :%.2lf\n ",valor);
        break;
    case 5:
        preco = 2.0;
        valor = preco * quantidade;
        printf("O valor total será :%.2lf\n ",valor);
    break;
    

    default:
        printf("Erro. Tente novamente.");
    break;
    }
    printf("Gostaria de fazer mais um pedido?\n Digite 1-continuar\nDigite 0-Sair");
    scanf("%d",&sair);
    }

}