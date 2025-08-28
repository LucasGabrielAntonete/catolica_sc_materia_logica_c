#include <stdio.h>
#include <math.h>

int main(){
    int operation_type;
    float number1, number2;

    printf("Digite o numero 1 \n");
    scanf("%f", &number1);

    printf("Digite o numero 2 \n");
    scanf("%f", &number2);

    printf("[ 1 ] – Adição\n[ 2 ] – Subtração\n[ 3 ] – Multiplicação\n[ 4 ] – Divisão\n[ 5 ] – Fim\n");
    scanf("%i", &operation_type);

    if(operation_type == 1){
        printf("Os respectivos numeros são: %.2f e %.2f \n A soma é %.2f \n",number1, number2, number1 + number2);
    }
    else if(operation_type == 2){
        printf("Os respectivos numeros são: %.2f e %.2f \n A subtração é %.2f \n",number1, number2, number1 - number2);
    }
    else if(operation_type == 3){
        printf("Os respectivos numeros são: %.2f e %.2f \n A multiplicação é %.2f \n",number1, number2, number1 * number2);
    }
    else if(operation_type == 4){
        if(number1 == 0 || number2 == 0) {
             printf("Não pode ter divisão com algum dos numeros sendo 0 \n");
        }
        else{
        printf("Os respectivos numeros são: %.2f e %.2f \n A multiplicação é %.2f \n",number1, number2, number1 / number2);
        }
    }
    else{
        return printf("FIM. \n");
    }
}