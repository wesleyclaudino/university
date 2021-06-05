#include <stdio.h>

int main (){
	
	float jan, fev, mar;
	
	printf("\n Digite o valor gasto no mes de Janeiro: \t");
	scanf("%f", &jan);
	
	printf("\n Digite o valor gasto no mes de Fevereiro: \t");
	scanf("%f", &fev);
	
	printf("\n Digite o valor gasto no mes de Marco: \t");
	scanf("%f", &mar);
	
	float vt = jan + fev + mar;
	
	printf("\n O valor total gasto no trimestre foi de: \t %.2f", vt);
	
	return 0;
	
}
