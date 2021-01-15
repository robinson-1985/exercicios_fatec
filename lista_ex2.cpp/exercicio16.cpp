/* 16. Faça um programa que receba o número de horas trabalhadas e o valor do 
salário mínimo, calcule e mostre o salário a receber, seguindo estas regras: 

a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor 
da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto. */

#include<stdio.h>
int main(){
    float hora_trabalhada, salario_minimo, salario_receber, valor_hora, salario_bruto, imposto;
    printf("Digite horas trabalhadas: \n");
    scanf("%f",&hora_trabalhada);
    printf("Digite valor do salario minimo: \n");
    scanf("%f",&salario_minimo);

    valor_hora = hora_trabalhada * (salario_minimo / 2); 
    
    printf("\nEsse e o valor da hora trabalhada: %.2f \n", hora_trabalhada);
    
    salario_bruto = hora_trabalhada * valor_hora;

    printf("\nIsso corresponde ao seu salario bruto: %.2f \n", salario_bruto);
    
    imposto = salario_bruto * 0.03;

    printf("\nO valor do imposto e: %.2f \n", imposto);
    
    salario_receber = salario_bruto - imposto;

    printf("\nO salario a receber e: %.2f \n", salario_receber);
    
    getchar();
    return 0;
}