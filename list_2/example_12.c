#include <stdio.h>
#include <math.h>

int main(){
    int operation_type;
    float base, height;

    printf("[ 1 ] ÁREA DO RETANGULO \n [ 2 ] ÁREA DO TRIANGULO \n [ 3 ] ÁREA DO CÍRCULO \n [ 4 ] \n ÁREA DO QUADRADO \n [ 5 ] ÁREA DO TRAPÉZIO \n" );
    scanf("%i", &operation_type);

    if(operation_type == 1){
        printf("Me passe o valor da base amigo \n");
        scanf("%f", &base);
        printf("Me passe o valor da altura amigo \n");
        scanf("%f", &height);

        return printf("ÁREA DO RETANGULO: %.2f \n", base * height);
    }
    else if(operation_type == 2){
        printf("Me passe o valor da base amigo \n");
        scanf("%f", &base);
        printf("Me passe o valor da altura amigo \n");
        scanf("%f", &height);

        return printf("ÁREA DO TRIANGULO: %.2f \n", (base * height) /2);
    }
    else if(operation_type == 3){
        float pi = 3.14159;
        float raio, result;
        printf("Me passe o valor da raio amigo \n");
        scanf("%f", &raio);
        
        result = pi * pow(raio, 2);
        return printf("ÁREA DO CIRCULO: %.2f \n", result);
    }
    else if(operation_type == 4){
        float side1, side2;
        printf("Me passe o valor do lado 1 amigo \n");
        scanf("%f", &side1);
        printf("Me passe o valor do lado 2 amigo \n");
        scanf("%f", &side2);

        return printf("A área do quadrado é %.2f \n", side1 * side2);
    }
    else if(operation_type == 5){
        float bigSide, smallSide, altura, result;
        printf("Me passe o valor do lado maior amigo \n");
        scanf("%f", &bigSide);
        printf("Me passe o valor do lado menor amigo \n");
        scanf("%f", &smallSide);
        printf("Me passe o valor da ALTURA amigo \n");
        scanf("%f", &altura);

        result = (bigSide + smallSide) * altura / 2;

        return printf("A Área de um TRAPÉZIO é: %.2f \n", result);
    }
    else{
        return printf("ERRO. \n");
    }
}