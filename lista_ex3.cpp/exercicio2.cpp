/* 2. Faça um algoritmo que receba dois números e ao final mostre a soma, subtração,
multiplicação e a divisão dos números lidos.*/

#include <stdio.h>
int main(){
    float numero1, numero2, soma, subtracao, multiplicacao, divisao, resultado;
    printf("Digite um número: \n");
    scanf("%f", &numero1);
    printf("Digite outro número: \n");
    scanf("%f", &numero2);

    resultado = (soma = numero1 + numero2) + (subtracao = numero1 -numero2) + (multiplicacao = numero1 * numero2) + (subtracao = numero1 * numero2);

    printf("O resultado será: %.2f \n", resultado);
    
    getchar();
    return 0;
}