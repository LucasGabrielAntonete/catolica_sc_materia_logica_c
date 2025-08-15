#include <stdio.h>
#include <math.h>

float main(){
    float numero1, numero2;

    printf("Digite o numero 1 \n");
    scanf("%f", &numero1);

    printf("Digite o numero 2 \n");
    scanf("%f", &numero2);

    if(numero1 > numero2){
        return printf("O numero 1 é maior, sendo ele: %.2f \n", numero1);
    }
    else if(numero1 < numero2) {
        return printf("O numero 2 é maior, sendo ele: %.2f \n", numero2);
    }
    else{
        return printf("Os numeros são iguais \n");
    }
}