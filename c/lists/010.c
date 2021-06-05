#include <stdio.h>

void verificacao(int ano){
    
    if(ano%4==0 && ano%100!=0 || ano%400==0){
        printf("\t O ano de %d é um ano bissexto.", ano);
    }else{
        printf("\t O ano de %d não é um ano bissexto.", ano);
    }
    
}

int main(){

    int ano;
    
    printf("\n Digite o ano desejado: \t");
    scanf("%d", &ano);
    
    verificacao(ano);
}