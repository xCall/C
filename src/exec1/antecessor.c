//
// Created by xcall on 16/06/2022.
//
#include <stdio.h>

int main() {
    int num, ant, suc;
    printf("Digite o numero:\n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\nO antecessor e: %d", ant);
    printf("\nO sucessor e: %d", suc);

    return (0);
}