#include <stdio.h>

int main(){

    int matriz[4][4], lin[4];
    
    printf("\n Digite 16 números: \t");
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int j=0; j<4; j++){
        lin[j] = 1;
        for(int i=0; i<4; i++){
            lin[j] = lin[j] * matriz[i][j];
        }
    }
    
    for(int i=0; i<4; i++){
        printf("\t %d \t \n", lin[i]);
    }
}