#include <stdio.h>

int main(){

    int matriz[4][4], lin[4];
    
    printf("\n Digite 16 números: \t");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i=0; i<4; i++){
        lin[i] = 1;
        for(int j=0; j<4; j++){
            lin[i] = lin[i] * matriz[i][j];
        }
    }
    
    for(int i=0; i<4; i++){
        printf("\t %d \t \n", lin[i]);
    }
}