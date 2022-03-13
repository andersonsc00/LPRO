#include <stdio.h>
#include <locale.h>

float pesoideal(float altura, char sexo){
	
	float p_ideal = 0.0;
	
	if(sexo == 'M'){
		p_ideal = 72.7 * altura - 58;
	}else{
		if(sexo == 'F'){
		p_ideal = 62.1 * altura - 44.7;
		}
	}
	return p_ideal;
}

int main() {
	setlocale(LC_ALL, "Portuguese, Brazil");
	
	float altura;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu sexo F - Feminino ou M - Masculino: ");
	scanf("%s", &sexo);
	
	printf("Peso ideal: %.2f", pesoideal(altura,sexo));
	return 0;
}
