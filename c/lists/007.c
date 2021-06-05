#include <stdio.h>

int main(){

    int matriz[6][6];
    
    printf("\t Digite 36 valores inteiros para sua matriz: \n");
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int mult = 1;
    
    for (int i=0; i<5; i++){
       mult *= matriz[i][i];
    }
    
    printf("\n A multiplicação dos elementos da diagonal principal é: %d.", mult);
}