/* Autor: Ricardo Jafet Granados Chable, Realizado: 17/02/2022
Programa de practica en clase en C#: Suma de numeros.
*/
#include<stdio.h>

int main() {
	float numero=1, suma=0;
	int i=1;
	while(numero !=0) {
		printf("Introduce un numero %d: ", i);
		scanf("%f", &numero);
		suma=suma+numero;
		i++;
	}
	printf("La suma es %.2f", suma);
	return 0;	
}
