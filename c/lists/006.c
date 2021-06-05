#include <stdio.h>

int main(){

    int m1[3][4], m2[4][3], aux;
    
    printf("\n Digite os 12 valores da matriz: \t");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            aux = m1[i][j];
            m1[i][j] = m2[j][i];
            m2[j][i] = aux;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("%d \t", m2[i][j]);
        }
        printf("\n");
    }
}