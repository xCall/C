//
// Created by xcall on 17/06/2022.
//
#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    float total;
    printf("Informe um numero inteiro\n");
    scanf("%d", &n1);
    printf("Informe um numero inteiro\n");
    scanf("%d", &n2);
    printf("Informe um numero inteiro\n");
    scanf("%d", &n3);
    printf("Informe um numero inteiro\n");
    scanf("%d", &n4);

    total = (n1 + n2 + n3 + n4)/4;

    printf("\nA media e %.2f", total);

    return (0);
}