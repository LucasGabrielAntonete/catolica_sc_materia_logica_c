#include <stdio.h>
#include <ctype.h>

char main(){
    char sexo;
    printf("Se o seu Sexo for Masculino digite 'M', se for feminino digite 'F' \n");
    scanf("%c", &sexo);

    switch (toupper(sexo))
    {
    case 'F':
        return printf("O sexo é feminino \n");
        break;
    case 'M':
        return printf("O sexo é Masculino \n");
        break;
    default:
        return printf("Não tem sexo parceiro? \n");
        break;
    }
}