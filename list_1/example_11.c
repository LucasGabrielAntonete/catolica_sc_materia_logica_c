#include <stdio.h>  
#include <math.h>

float main(void){ 
    float salarioDia, salarioMes, quantidadeDescontada, porcentagemDescontada, salarioDescontado;
    int diasTrabalhados;

    printf("Quantos dias voce trabalha?");
    scanf("%i", &diasTrabalhados);

    if(diasTrabalhados){
        salarioDia = 25;
        salarioMes = salarioDia * diasTrabalhados;

        porcentagemDescontada = 0.08;

        quantidadeDescontada = salarioMes * porcentagemDescontada;
        salarioDescontado = salarioMes - quantidadeDescontada;

        return printf("O seu salario é de %2.f e você paga %2.f, e o seu salario descontado dá: %2.f", salarioMes, quantidadeDescontada, salarioDescontado);
    }
    else{
        return printf("Voce colocou algum dado errado bobinho");
    }

}