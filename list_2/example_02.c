#include <stdio.h>
#include <math.h>

float main(){
    float numero;
    float epsilon = 0.9000;

    printf("Digite o numero  \n");
    scanf("%f", &numero);

    if (numero < 0){
        printf("O numero é negativo \n");
    }
    else if ((numero - 0) < epsilon){
        printf("O numero é quase 0 ou 0, caindo na margem de erro de 0,9 \n");
    }  
    else if(numero > 0){
        printf("O numero é positivo \n");
    }

    return 0;
}