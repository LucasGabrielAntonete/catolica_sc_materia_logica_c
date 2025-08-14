#include <stdio.h>  
#include <math.h>

int main(){
    float salarioBruto, IR = 0.15, NCSS = 0.11, sindicato = 0.03, salarioIr, salarioNCSS, salarioSindicato, salarioLiquido;



    printf("Qual é o seu salario Bruto?");
    scanf("%f", &salarioBruto);

    if(salarioBruto){
        salarioIr = salarioBruto *  IR;
        salarioNCSS = salarioBruto * NCSS;
        salarioSindicato = salarioBruto * sindicato;

        salarioLiquido = salarioBruto - salarioIr - salarioNCSS - salarioSindicato;

        return(printf("O seu salario liquido é de: %2.f \n", salarioLiquido));
    }
    else{
        return(printf("Erro"));
    }
}