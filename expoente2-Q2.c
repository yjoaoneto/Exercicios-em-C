#include <stdio.h>
#include <math.h>

int main(){

	//Criando as vari�veis
	float numero,base,expoente;
	
	//Pedindo os dados
	printf("Digite um numero: ");
	scanf("%f",&numero);
	printf("Agora digite um expoente: ");
	scanf("%f",&base);

	//Executando a a��o
	expoente = pow(numero,base);
	printf("%.1f elevado a %.1f eh igual a: %.1f\n",numero,base,expoente);

}
