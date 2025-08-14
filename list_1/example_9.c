#include <stdio.h>  
#include <math.h>

float main(void) {
    float nota1, nota2, nota3, nota4, media;
    int numeroDeNotas = 4;
    char resposta;

    printf("Qual é a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Qual é a nota 2: ");
    scanf("%f", &nota2);
    
    printf("Qual é a nota 3: ");
    scanf("%f", &nota3);
    
    printf("Qual é a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / numeroDeNotas; 
    resposta = printf("A sua média é:  %2.f \n", media);

    return resposta;
}