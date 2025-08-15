#include <stdio.h>
#include <math.h>

float main(){
    int numero;

    printf("Digite o numero 1 \n");
    scanf("%i", &numero);

    int conta = ((int)numero % 2);

    if(conta == 2 || conta == 0){
        return printf("O numero é par:  %i \n", conta);
    }
    else {
        return printf("O numero é impar:  %i \n", conta);
    }
}