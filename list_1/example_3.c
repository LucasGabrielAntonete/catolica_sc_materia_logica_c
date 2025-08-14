#include <stdio.h>
#include <math.h>


int main(void) {
    float tempF, tempC;
    printf("Qual é a sua temperatura em F?");
    scanf("%f",&tempF);
    if(tempF){
        tempC = (tempF - 32) *  5 / 9;
    }
    printf("\n A sua temperatura em Celcius é: %.1f°C", tempC);
    return 0;
}