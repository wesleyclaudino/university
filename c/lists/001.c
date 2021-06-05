#include <stdio.h>

int main(){
    float notas[9];
    
    printf("\n Digite as 10 notas: \t");
    
    for(int i=0; i<10; i++){
        scanf("%f", &notas[i]);
        printf("\n %.2f", notas[i]);
    }
}