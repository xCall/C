//
// Created by xcall on 17/06/2022.
//
#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){
    float raio, area, perimetro;
    printf("Informe o raio:\n");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;

    area = PI * pow(raio, 2);

    printf("\nA area do circulo: %.2f", area);
    printf("\nO perimetro do circulo: %.2f", perimetro);
    return (0);
}