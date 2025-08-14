#include <stdio.h>  
#include <math.h>

float main(void){

    float largura, altura, consumoDeLatasPorMetro = 3, quantidadeDeTintaNaLata = 3.6, dimensao, quantidadeDeTintaUtilizada, divisaoDeTinta, quantidadeDeLatas;
    printf("Coloque o valor de Largura ");
    scanf("%f", &largura);
    
    printf("Coloque o valor de altura ");
    scanf("%f", &altura);


    dimensao = largura * altura;
    quantidadeDeTintaUtilizada = (dimensao * consumoDeLatasPorMetro) / quantidadeDeTintaNaLata;

    return printf("A quantidade de Latas de tintas que serão usadas são:  %2.f \n", quantidadeDeTintaUtilizada);
}