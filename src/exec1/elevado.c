//
// Created by xcall on 16/06/2022.
//
#include <stdio.h>
#include <math.h>
int main() {
    float num1, num2, total;

    printf("Informe o primeiro numero:\n");
    scanf("%f", &num1);

    printf("Informe o segundo numero:\n");
    scanf("%f", &num2);

    total = pow(num1, num2);

    printf("\nO %.2f elevado a %.2f e: %.2f", num1, num2, total);
    return (0);
}