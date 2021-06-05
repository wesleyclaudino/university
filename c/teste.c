#include <stdio.h>
#include <stdlib.h>

int main()
{
   char A[30], B[20], C[30];

   
   printf("Digite o valor em A: \n");
   
   scanf("%s", &A);
   
   printf("Digite o valor em B: \n");
   
   scanf("%s", &B);
  
    printf("\t\t Escreveu em A = %s e em B =  %s \n\n", A, B);
   
    
    printf("\t\t Invertendo os valores A = %s e B =  %s \n", A, B);

    system("pause");
    return 0;
}
