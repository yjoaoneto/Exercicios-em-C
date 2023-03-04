#include <stdio.h>
#include <math.h>

void main(){

	//Criando as variáveis
	float numero,expoente,i = 0;
	
	numero = 3;
	
	//Criando o looping
	for(i = 0;i < 16;i++){
		expoente = pow(3,i);
		printf("%.1f elevado a %.1f eh igual a: %.1f\n",numero,i,expoente);
	}
	

	

}


