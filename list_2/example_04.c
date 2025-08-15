#include <stdio.h>
#include <math.h>


int main(void){
    int numero;
    printf("Diga o numero que sera transformado em Impar ou Par: ");
    scanf("%i", &numero);
    int conta = numero % 2;
    if(conta == 2 || conta == 0){
        return printf("O numero era par sendo ele %i, mas deixando ele impar ficou %i \n", numero, numero - 1);
    }
    else{
        return printf("O numero era impar sendo ele %i, mas deixando ele par ficou %i \n", numero, numero + 1);
    }
}