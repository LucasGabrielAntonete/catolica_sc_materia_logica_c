#include <stdio.h>
#include <math.h>

int main(){
    int idade1, idade2, idade3, idade4;
    float media = 0, soma;

    printf("Digite a idade 1: \n");
    scanf("%i", &idade1);

    printf("Digite a idade 2: \n");
    scanf("%i", &idade2);

    printf("Digite a idade 3: \n");
    scanf("%i", &idade3);

    printf("Digite a idade 4: \n");
    scanf("%i", &idade4);

    soma = (idade1 + idade2 + idade3 + idade4);
    media =  soma / 4;

    if(media <= 25){
        return printf("Turma jovem! Média de idade de: %.2f \n", media);
    }
    else if (media >= 25 && media <= 40) {
        return printf("Turma adulta! Média de idade de  %.2f \n", media);
    }
    else {
        return printf("Turma de velhos! Média de idade de  %.2f \n", media);
    }
}