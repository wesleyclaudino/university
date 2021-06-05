#include <stdio.h>

main(){
    
float jan;
float fev;
float mar;

printf("Digite o valor gasto em Janeiro: \n");
scanf("%f", &jan);
printf("Digite o valor gasto em Fevereiro: \n");
scanf("%f", &fev);
printf("Digite o valor gasto em Março: \n");
scanf("%f", &mar);

float gt = jan + fev + mar;

printf("O valor total gasto no trimestre foi de: %6.2f", gt);
}
