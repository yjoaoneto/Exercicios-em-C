#include <stdio.h>
#include <math.h>

void main(){

	//Criando as vari�veis
	float graos,tabuleiro,resultado;
	graos = 1;
	tabuleiro = 0;
	resultado = 0;
	
	//Criando la�o
	while(tabuleiro < 63){
		resultado = resultado + graos;
		graos = graos * 2;
		tabuleiro++;
		printf("%.1f\n \n",resultado);
	}
	
}


