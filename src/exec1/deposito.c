//
// Created by xcall on 16/06/2022.
//
#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;

    printf("Informe o valor a ser depositado: \n");
    scanf("%f", &deposito);
    printf("Informe o valor da taxa: \n");
    scanf("%f", &taxa);

    rendimento = (deposito * taxa) / 100;
    total = rendimento + deposito;

    printf("\nO valor do rendimento e: %.2f", rendimento);
    printf("\nO valor do total e: %.2f", total);

    return (0);
}