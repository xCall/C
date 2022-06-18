//
// Created by xcall on 17/06/2022.
//

#include <stdio.h>

int main() {
    int num1, num2, total;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("\nA soma dos numero e: %d", total);
    return (0);
}