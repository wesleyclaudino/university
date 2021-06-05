#include <stdio.h>

int main(){
	
	int a, b;
	
	printf("\n Digite um numero desejado: \t");
	scanf("%d", &a);
	
	printf("\n Digite um segundo numero desejado: \t");
	scanf("%d", &b);
	
	printf("\n Os valores inseridos foram: \t %d e %d", a, b);
	
	int vartemp = a;
	a = b;
	b = vartemp;
	
	printf("\n Os valores, agora invertidos, sao:  \t %d e %d", a, b);
	
}