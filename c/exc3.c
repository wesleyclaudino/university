#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("\n Digite o primeiro numero desejado: \t");
	scanf("%d", &num1);
	
	printf("\n Digite o segundo numero desejado: \t");
	scanf("%d", &num2);
	
	int soma = num1 + num2;
	
	printf("\n A soma dos numeros %d e %d e: \t %d", num1, num2, soma);
	
	int sub = num1 - num2;
	
	printf("\n A subtracao entre os numeros %d e %d e: \t %d", num1, num2, sub);
	
	int mult = num1 * num2;
	
	printf("\n O produto entre os numeros %d e %d e igual a: \t %d", num1, num2, mult);
	
	int div = num1 / num2;
	
	printf("\n A divisao entre os numeros %d e %d tem como quociente: \t %d", num1, num2, div);
	
}
