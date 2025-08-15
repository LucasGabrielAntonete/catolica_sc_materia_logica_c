#include <stdio.h>
#include <ctype.h>

char main(){
    char letra;
    printf("Digite a sua letra meu amigo \n");
    scanf("%c", &letra);

    switch (toupper(letra))
    {
    case 'A':
        return printf("Vogal \n");
        break;
    case 'E':
        return printf("Vogal \n");
        break;
    case 'I':
        return printf("Vogal \n");
        break;
    case 'O':
        return printf("Vogal \n");
        break;
    case 'U':
        return printf("Vogal \n");
        break;
    default:
        return printf("Consoante \n");
        break;
    }
}