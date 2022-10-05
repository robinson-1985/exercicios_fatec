/* 14. Faça um programa que receba o salário inicial de um funcionário, calcule
e mostre o novo salário,acrescido de bonificação e de auxílio escola.
salário                           bonificação           salário           auxílio-escola
até R$ 500,00                     5% do salário         até R$ 600,00     R$ 150,00
entre R$ 500,00 e R$ 1.200,00     12% do salário        Acima de R$ 600   R$ 100,00
Acima de R$ 1.200,00              Sem bonificação */

#include <stdio.h>
int main(){
    float salario_inicial , salario_novo, bonificacao = 0, auxilio_escola;
    printf("\nDigite o seu salario: R$");
    scanf("%f", &salario_inicial);

    if (salario_inicial <= 500){
        bonificacao = salario_inicial + (5/100); 
    }
        
    else if(salario_inicial > 500 && salario_inicial < 1200 ){
            bonificacao = salario_inicial + (12/100);
    }
    
    else{
        printf("Sem bonificacao \n");
    }
   
    if(salario_inicial < 600){
        auxilio_escola = salario_inicial + 150;
    }

    else if(salario_inicial > 600){
        auxilio_escola = salario_inicial + 100;
    }

    salario_novo = salario_inicial + bonificacao + auxilio_escola;
    
    printf("O seu salario total e: R$%.2f \n", salario_novo);

    getchar();
    return 0;
}
