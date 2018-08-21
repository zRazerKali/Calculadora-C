#include <stdio.h>
#include <stdlib.h>

/*
	Calculadora
	29/07/2018
*/


int main(void){
int x;      
int y;	
int soma;
int menos;
int vezes;
int div;
	system("color a");

printf("\n");
	printf(" Calculadora C\n");
	printf("\n");
	printf("\n");
	
printf(" Digite o Primeiro Numero: ");
scanf("%i",&x);
printf(" Digite o Segundo Numero: ");
scanf("%i",&y);
printf("\n");
printf("\n");

soma = x + y;
printf(" Resultado Soma: %i", soma);
printf("\n");
menos = x - y;
printf(" Resultado Menos: %i", menos);
printf("\n");
vezes = x * y;
printf(" Resultado Vezes: %i", vezes);
printf("\n");
vezes = x / y;
printf(" Resultado Divisao: %i", vezes);
printf("\n");
printf("\n");
printf("\n");

return 0;

/*	int num1, num2;
	num1 = 10;
	num2 = 20;
	
	int soma = num1 + num2;
	printf("O Resultado: %i ", soma );
	return 0;
	*/
}
