#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float volume(float r) {
	float vol = (4 * 3.14 * (r * r * r))/3;
	return vol;
}

int main() {
	setlocale(LC_ALL, "Portuguese, Brazil");
	float raio, resultado;
	
	printf("\nCalcular volume da esfera.\n");
	
	printf("\nInforme o raio da esfera: ");
	scanf("%f", &raio);
	
	resultado = volume(raio);
	printf("O volume da esfera é: %2.f", resultado);
	
	return 0;
}
