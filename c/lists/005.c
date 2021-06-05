#include <stdio.h>

int main(){

    int m1[2][5], m2[2][5], m3[2][5];
    
    printf("\n Digite 10 valores desejados: \t");
    
    for (int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\n Digite mais 10 números desejados: \t");

    for (int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &m2[i][j]);
        }
    }
    
    int soma = 0;
    
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            soma = m1[i][j] + m2[i][j];
            printf("\t A soma dos indíces da linha %d coluna %d é de: %d \n", i, j, soma);
        }
    }
}