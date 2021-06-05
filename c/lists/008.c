#include <stdio.h>

int main(){

    int matriz[3][3], soma=0;
    
    printf("\n Digite 9 valores para a matriz: \t");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        
            soma += matriz[i][j];
        }
    }
    
    printf("\t O valor do somatório de todos elementos da matriz foi de: %d", soma);
}