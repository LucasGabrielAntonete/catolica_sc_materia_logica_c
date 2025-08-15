#include <stdio.h>
#include <math.h>

float main(){
    float numero;

    printf("Coloque o numero \n");
    scanf("%f", &numero);

    if(numero == (int) numero){
        return printf("O Numero é um inteiro");
    }
    else{
        return printf("O Numero é um float");
    }
}