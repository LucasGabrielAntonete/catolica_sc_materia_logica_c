#include <stdio.h>  
#include <math.h>
#include "helpers/multiplica_dois_numeros.h"

int a(int numeroA, int numeroB) {
    int numeroA2, numeroB2, produtoA;

    if(numeroA, numeroB){ 
        numeroA2 = numeroA * 2;
        numeroB2 = numeroB / 2;
        produtoA = multiplica_dois_numeros(numeroA2, numeroB2);
    }

    return(produtoA);
}

float b(int numeroA, float numeroC){
    int numeroA3;
    float soma;

    numeroA3 = numeroA * 3;
    soma = (float) numeroA3 + numeroC;

    return soma;
}

float c(float numeroC){
    float resultado;

    resultado = pow(numeroC, 3);

    return resultado;
}

int main(void) {
    int numeroA, numeroB, questaoA;
    float numeroC, questaoB, questaoC;
    
    printf("Qual é o numero 1: ");
    scanf("%i", &numeroA);

    printf("Qual é o numero 2: ");
    scanf("%i", &numeroB);

    printf("Qual é o numero 3 (FLOAT): ");
    scanf("%f", &numeroC);

    questaoA = a(numeroA, numeroB);
    questaoB = b(numeroA, numeroC);
    questaoC = c(numeroC);

    printf("Questão A = %d\n" , questaoA);
    printf("Questão B = %.2f\n" , questaoB);
    printf("Questão C = %.3f\n" , questaoC);
}
