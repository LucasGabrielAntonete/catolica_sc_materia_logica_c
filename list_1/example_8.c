#include <stdio.h>  
#include <math.h>

float main() {
    float numero1, numero2, resultado;

    printf("Me diga o numero 1: ");
    scanf("%f", &numero1);

    printf("Me diga o numero 1: ");
    scanf("%f", &numero2);
    
    resultado = numero1 + numero2;

    return printf("O resultado é: %.2f \n ", resultado);
}