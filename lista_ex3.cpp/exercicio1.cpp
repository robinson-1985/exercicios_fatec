// 1. Faça um algoritmo que receba dois números e exiba o resultado da sua soma.

#include <stdio.h>
int main(){
    int n1, n2, soma;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma dos números é: %d \n", soma);
    
    getchar ();
    return 0;
}