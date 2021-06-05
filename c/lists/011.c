#include <stdio.h>

int main(){
 
    int num, resto, validador=0;
    
    printf("\n Digite o número desejado \t");
    scanf("%d", &num);
    
    for(int i=2; i<num; i++){
        resto = num % i;
        if(resto==0){
            validador++;
        }
    }
    
    if(validador==0 && validador<1){
        printf("\t O número é primo. \n");
    }else{
        printf("\t O número não é primo. \n");
    }
    
    return 0;
}