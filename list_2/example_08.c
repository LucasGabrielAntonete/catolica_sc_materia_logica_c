#include <stdio.h>
#include <math.h>

float main(){
    float numero1, numero2, numero3;
    printf("Digite o numero 1: \n");
    scanf("%f", &numero1);

    printf("Digite o numero 2: \n");
    scanf("%f", &numero2);

    printf("Digite o numero 3: \n");
    scanf("%f", &numero3);

    if(numero1 >= numero2 && numero1 >= numero3){
        if(numero2 > numero3){
            printf("O Retorno é Numero 1: %.2f \n Numero 2 %.2f \n Numero 3 %.2f \n", numero1, numero2, numero3);
        }
        else{
            printf("O Retorno é Numero 1: %.2f \n Numero 3 %.2f \n Numero 2 %.2f \n", numero1, numero3, numero2);
        }
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        if(numero1 >= numero3) {
            printf("O Retorno é Numero 2: %.2f \n Numero 1 %.2f \n Numero 3 %.2f \n", numero2, numero1, numero3);
        }
        else{
            printf("O Retorno é Numero 2: %.2f \n Numero 3 %.2f \n Numero 1 %.2f \n", numero2, numero3, numero1);
        }
    }
    else if (numero1 >= numero2){
        printf("O Retorno é Numero 3: %.2f \n Numero 1 %.2f \n Numero 2 %.2f \n", numero3, numero1, numero2);
    }
    else {
        printf("O Retorno é Numero 3: %.2f \n Numero 2 %.2f \n Numero 1 %.2f \n", numero3, numero2, numero1);
    }
    
}