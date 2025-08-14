#include <stdio.h>  
#include <math.h>

int b(int quantMaquinas){
    int quantidadeDeMotoresInicial1, quantidadeDeMotoresInicial2, quantidadeDeMotoresInicial3, quantidadeDeMotoresFinal1, quantidadeDeMotoresFinal2, quantidadeDeMotoresFinal3, valorMotor1, valorMotor2, valorMotor3, valorFinal1, valorFinal2, valorFinal3;

    if(quantMaquinas){  
    quantidadeDeMotoresInicial1 = 1;
    quantidadeDeMotoresInicial2 = 2;
    quantidadeDeMotoresInicial3 = 3;
    quantidadeDeMotoresFinal1 = quantidadeDeMotoresInicial1 * quantMaquinas;
    quantidadeDeMotoresFinal2 = quantidadeDeMotoresInicial2 * quantMaquinas;
    quantidadeDeMotoresFinal3 = quantidadeDeMotoresInicial3 * quantMaquinas;

    valorMotor1 = 1500;
    valorMotor2 = 300;
    valorMotor3 = 600;

    valorFinal1 = valorMotor1 * quantidadeDeMotoresFinal1;
    valorFinal2 = valorMotor2 * quantidadeDeMotoresFinal2;
    valorFinal3 = valorMotor3 * quantidadeDeMotoresFinal3;

    return printf("A quantidade final de motores de 20CV é de %i \n A quantidade de motores de 1 CV é de %i \n A quantididade de motores de 5cv é de  %i \n Valor do primeiro Motor %i \n Valor do Segundo Motor %i \n Valor do Terceiro Motor %i \n Valor total da compra: %i \n", quantidadeDeMotoresFinal1, quantidadeDeMotoresFinal2, quantidadeDeMotoresFinal3, valorFinal1, valorFinal2, valorFinal3, valorFinal1 + valorFinal2 + valorFinal3);
    }
    else{
        return printf("Erro");
    }
}


int main(void) {
    int quantMaquinas;

    printf("Quantas maquinas voce precisa: ");
    scanf("%i", &quantMaquinas);

    b(quantMaquinas);
}

