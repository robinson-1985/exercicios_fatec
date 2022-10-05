/* 6.Faça um programa que receba o salário base de um funcionário, calcule e mostre o 
salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário 
base e paga imposto de 7% também sobre o salário base. */

#include <stdio.h>
int main (){
    float salario_base, salario_receber, gratificacao, imposto, resultado;
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f",&salario_base); 
    
    gratificacao = (salario_base * 0.05); 
    imposto = (salario_base * 0.07);
    salario_receber = salario_base + gratificacao - imposto;
    
    printf("O salário a receber é: R$ %.2f \n", salario_receber); 
    
    getchar();
    return 0;
}