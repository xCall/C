#include <stdio.h>

int main () {
  float num1;
  printf("Digite um numero:\n");
  scanf("%f", &num1);
  if(num1>0){
    printf("\nNumero positivo");
  } else if (num1<0) {
    printf("\nNumero negativo");
  } else {
  printf("\nNumero nao e positivo nem negativo");
  }

  return (0);
}