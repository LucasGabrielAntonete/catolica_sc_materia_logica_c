#include <stdio.h>
#include <math.h> 

int main(void) {
    int valorSaque; 
    int notasDeCinquenta, notasDeVinte, notasDeDez; 

    printf("Digite o valor do saque: ");
    scanf("%d", &valorSaque);

    if (valorSaque % 10 == 0) {        
        notasDeCinquenta = valorSaque / 50;
        valorSaque = valorSaque % 50;
        notasDeVinte = valorSaque / 20;
        valorSaque = valorSaque % 20; 

        notasDeDez = valorSaque / 10;

        printf("\nO seu saque sera entregue em:\n");
        printf("Notas de R$50: %d\n", notasDeCinquenta);
        printf("Notas de R$20: %d\n", notasDeVinte);
        printf("Notas de R$10: %d\n", notasDeDez);

    } else {
        printf("\nNao e possivel sacar este valor. Por favor, digite um valor multiplo de 10.\n");
    }

    return 0;
}