#include <stdio.h>
#include <string.h>

struct casa{
	float largura;
	float comprimento;
	char nome[50];
};


void main(){
	char resposta[50];
	struct casa comodos;
	float area;
	int ret;
	
	
	while(resposta != "n"){
		
			
		printf("\nQual comodo voce deseja calcular? ");
		scanf("%s",&comodos.nome);
		fflush(stdin);
		printf("\nQual o comprimento do comodo? ");
		scanf("%f",&comodos.comprimento);
		fflush(stdin);
		printf("\nQual a largura do comodo? ");
		scanf("%f",&comodos.largura);
		
		
		area = (comodos.comprimento * comodos.largura);
		
		printf("\nA area do(a) %s eh de %.1f",comodos.nome,area);
		
		
		printf("\nDeseja calcular algum outro comodo? Digite s ou n: ");
		scanf("%s",&resposta);
		fflush(stdin);
	
		if(resposta == "n"){
		
			break;
		}
	};
	

	

}

