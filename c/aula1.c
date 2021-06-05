#include <stdio.h>

int main(){

int num1, num2;

    printf("Digite um valor inteiro desejado: \n");
    scanf("%d", &num1);
    printf("Digite um segundo valor desejado: \n");
    scanf("%d", &num2);

    int res = num1 + num2;

    printf("O valor de %d + %d é igual a %d", num1, num2, res);

    system("pause");
    return 0;
}