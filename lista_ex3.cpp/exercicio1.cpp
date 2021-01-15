// 1. Faça um algoritmo que receba dois números e exiba o resultado da sua soma.

#include <stdio.h>
int main(){
    int numero1, numero2, soma;
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma dos números é: %d \n", soma);
    
    getchar ();
    return 0;
}