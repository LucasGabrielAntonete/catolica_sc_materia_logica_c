#include <stdio.h>  
#include <math.h>


float main(void) {
    float valorHora, salario, diasTrabalhados, valorDia;

    printf("Qual é o valor hora que voce recebe? ");
    scanf("%f", &valorHora);

    printf("Quantos dias você trabalha por mes? ");
    scanf("%f", &diasTrabalhados);

    if(diasTrabalhados, valorHora){
        valorDia = valorHora * 8;
        salario = valorDia * diasTrabalhados;

        return printf("O seu salario é de: %2.f \n", salario);
    }
    else{ 
        return printf("Erro ao informar algum dos itens.");
    }
}