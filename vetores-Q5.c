#include <stdio.h>
#include <math.h>

void main(){

	//Criando as vari�veis
	int i,numero[5],j,max,min;
	
	for(j = 0;j < 5;j++){
		printf("Digite um numero: ");
		scanf("%d", &numero[j]);
	}
	
	j = 0;
	
	for(j = 0;j < 5;j++){
		printf("\n%d \n",numero[j]);
	}
	
	for(j = 0;j < 5;j++){
		if(j == 0){
			max = numero[0];
			min = numero[0];
		}
		else if(max < numero[j]){
			max = numero[j];
		}
		else if(min > numero[j]){
			min = numero[j];
		}
		
	}

	printf("\nO maior numero eh: %d\n",max);
	printf("O menor numero eh: %d\n",min);
	
	

}
