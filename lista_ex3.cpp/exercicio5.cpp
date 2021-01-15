/* 5. Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que 
ele obteve no semestre. No final informar o nome do aluno e a sua média (aritmética).*/

#include <stdio.h>
int main(){
    char nome [40];
    float n1, n2, n3, media_aritmetica;
    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome);
    printf("Digite as notas do aluno em sequência: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media_aritmetica = (n1 + n2 + n3) / 3;

    printf("Nome do aluno: %s\n A média final é: %.2f \n", nome, media_aritmetica); 
    
    getchar();
    return 0;
}