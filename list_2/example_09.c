#include <stdio.h>
#include <math.h>

float main(){
    float nota1, nota2, nota3, soma;
    float media = 0;

    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);

    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);

    printf("Digite a nota 3: \n");
    scanf("%f", &nota3);

    soma = (nota1 + nota2 + nota3);
    media =  soma / 3;

    if(media == 10){
        return printf("Voce passou de ano com a media com a Média 10, PARABENS!  \n");
    }
    else if (media >= 7) {
        return printf("Voce passou de ano com a media %.2f \n", media);
    }
    else {
        return printf("Voce reprovou de ano com a media %.2f \n", media);
    }
}