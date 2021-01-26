/* 5.Faça um programa que receba o salário de um funcionário e o percentual 
de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
int main(){ 
    float sal, perc, aumento, novosal;
    printf("\nDigite o salário do funcionário: R$ ");
    scanf("%f",&sal);
    printf("\nDigite o percentual de aumento: R$ ");
    scanf("%f",&perc);
    
    aumento = sal * perc/100;
    printf("Aumento = R$ %4.2f \n", aumento);

    novosal = sal + aumento;
    printf("Novo salário = R$ %4.2f \n", novosal);

    getchar();
    return 0;
}