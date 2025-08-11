#include <stdio.h>  
#include <math.h>

float main(){
    float raio, rq, pi, area;
    char resposta;
    pi = 3.14159;

    printf("Qual é o raio?");
    scanf("%f", &raio);

    rq = pow(raio, 2);
    area = rq * pi;

    resposta = printf("Area do circulo é: %.3f\n", area);

    return resposta;
}
