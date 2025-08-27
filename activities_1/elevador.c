#include <stdio.h>
	
int main() {
  int total = 0, atual = 0;
    
    printf("Indo para o Segundo andar");
    total += 2 - atual;

    printf("indo para o Segundo para o Térreo andar.\n");
	total += 2;
	atual = 0;
	
	printf("indo do %d para o Quarto andar.\n", atual);
	total += 4 - atual;
	printf("Saindo do Quarto para o Térreo andar.\n");
	total += 4;
	atual = 0;
	
	printf("indo do %d para o Quinto andar.\n", atual);
	total += 5 - atual;
	printf("Saindo do Quinto para o Térreo andar.\n");
	total += 5;
	atual = 0;
	
	return printf("Total: %d\n", total);
}
