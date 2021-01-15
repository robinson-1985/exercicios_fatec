/* 9. Faça um algoritmo que receba um valor que foi depositado e exiba o valor com
rendimento após um mês. Considere fixo o juro da poupança em 0,70% a. m. */

#include <stdio.h>
int main(){
   float valor_depositado, valor_rendimento;
   printf("Valor do deposito: R$");
   scanf("%f", &valor_depositado);

   valor_rendimento = valor_depositado * 0.007;

   printf("Valor do rendimento: R$ %.2f \n", valor_rendimento);

   getchar();
   return 0;
}