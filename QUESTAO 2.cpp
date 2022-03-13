#include <stdio.h>
#include <locale.h>

float segundos(float hrs, float min, float seg) {
	float calculo;
	calculo = (seg + min * 60) + (hrs * 60 * 60);
	return calculo;
}


int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float hrs, min, seg;
	
	printf("\nConversão de horas, minutos e segundos em segundos. ");
	
	printf("\nInforme a hora, minutos e segundos: ");
	scanf("%f%f%f", &hrs, &min, &seg);
	
	printf("\nO resultado da conversão é: %f", segundos(hrs, min, seg));
}
