/* 6. Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores 
de forma que a variável A passe a possuir o valor da variável B e a variável B 
passe a possuir o valor da variável A. Apresentar os valores trocados.*/

#include <stdio.h>
int main(){
    int a, b, troca;
    printf("Informe o valor da variável A: \n");
    scanf("%d", &a);
    printf("Informe o valor da variável B: \n");
    scanf("%d", &b);

    troca = a;
    a = b;
    b = troca;

    printf("O novo valor de A é: %d \n", a);
    printf("O novo valor de B é: %d \n", b);

    getchar();
    return 0;
}