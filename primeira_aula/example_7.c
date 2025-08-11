#include <stdio.h>  
#include <math.h>

float main() {
    float metros, centimetros;
    char resultado;

    printf("Insira a quantidade de metros:");
    scanf("%f", &metros);

    centimetros = metros * 100;
    resultado = printf("Seus metros %.2f convertidos para centimetros dão: %.2f centimetros \n", metros, centimetros);

    return resultado;
}