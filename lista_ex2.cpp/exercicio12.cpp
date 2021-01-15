/* 12. Faça um programa que receba dois números maiores que zero, calcule 
e mostre um elevado ao outro.*/

#include<stdio.h>
#include<math.h>
int main(){
    int numero1, numero2, resultado;
    printf("Digite um numero: \n");
    scanf("%d",&numero1);
    printf("Digite um numero: \n");
    scanf("%d", &numero2);

    resultado = pow(numero1, numero2);

    printf("%d \n",resultado);

    getchar();
    return 0;
}
