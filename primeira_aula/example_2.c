#include <stdio.h>
#include <math.h>

int main (void) {
  int idade;
  float altura;
  char nome[50];

  printf("Informe sua idade: ");
  scanf("%i",&idade);
  fflush(stdin);

  printf("Informe sua altura: ");
  scanf("%f",&altura);
  fflush(stdin);

  printf("Informe seu nome: ");
  scanf(" %[^\t\n]s", nome);

  printf("\n");

  printf("Sua idade é: %i\n", idade);
  printf("Sua altura é: %lf\n", altura);
  printf("Seu nome é %s\n:", nome);

  return 0;
}