/* 8. Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$)
de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do 
dólar e também a quantidade de dólares disponíveis com o usuário.*/

#include <stdio.h>
int main(){
    float real, dolares, cotacao;
    printf("Digite quantos dólares: $ ");
    scanf("%f", &dolares);
    printf("Digite a cotação: R$ ");
    scanf("%f", &cotacao);

    real =  dolares * cotacao;

    printf("Valor em reais: %.2f \n", real);
    
    getchar();
    return 0;
}