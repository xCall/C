//
// Created by xcall on 16/06/2022.
//
#include <stdio.h>

int main() {
    int idade, ano;
    float altura;
    char nome[30];

    /* entrada de dados */
    /* mensagem ao usuario */

    printf("Digite o seu nome:\n");
    scanf("%s", nome); /* leitura do nome */

    /* mensagem ao usuario */

    printf("Digite a idade:\n");
    scanf("%d", &idade); /* leitura da idade */

    /* mensagem ao usuario */

    printf("Digita a altura:\n");
    scanf("%f", &altura); /* leitura da altura*/

    /* processamento */
    /* calculo do ano de nascimento */
    ano = 2022 - idade;

    /* saida de dados */

    printf("\nO nome e: %s", nome);
    printf("\nA altura e: %.2f", altura);
    printf("\nA idade e: %d", idade);
    printf("\nO ano de nascimento e: %d", ano);

    return (0);

}