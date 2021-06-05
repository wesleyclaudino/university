#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3;
	
	printf("\n Digite a primeira nota: \t");
	scanf("%f", &nota1);
	
	printf("\n Digite a segunda nota: \t");
	scanf("%f", &nota2);
	
	printf("\n Digite a terceira nota: \t");
	scanf("%f", &nota3);
	
	float media = (nota1 + nota2 + nota3)/3;
	
	printf("\n A media das notas foi: \t %.2f", media);
	
	return 0;
	
}
