/* 1. Faça um programa que receba quatro números inteiros, calcule e mostre 
a soma desses números.

#include <stdio.h>
int main (){
    int n1, n2, n3, n4, soma;
    // Mostra mensagem antes da leitura dos quatro números
    // \n - coloca o cursor na linha de baixo
    printf("\nDigite quatro números\n");
    // Recebe os quatro números
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    // Soma os números digitados
    soma = n1 + n2 + n3 + n4;

    // Mostra mensagem e o resultado da soma
    printf("\nResultado da soma = %d\n",soma);

    // Para o programa a espera de um ENTER
    getchar();
    return 0;
} */

#include <stdio.h>
int main() {
    int numero1, numero2, numero3, numero4, soma;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);
    printf("Digite o quarto numero: ");
    scanf("%d", &numero4);

    soma = numero1 + numero2 + numero3 + numero4;

    printf("\n A Soma dos Numreos = %d\n", soma);

    getchar();
    return 0;
}
