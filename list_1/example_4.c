#include <stdio.h>
#include <math.h>


int main(void) {
    float tempF, tempC, a;
    printf("Qual é a sua temperatura em C?");
    scanf("%f",&tempC);
    if(tempC){
        tempF = (tempC * 9 / 5) + 32;  
    }
    printf("\n A sua temperatura em fei é: %.1f fei", tempF);
    return 0;
}