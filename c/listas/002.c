#include <stdio.h>

int main()
{

    int v1[9], v2[9];
    
    printf("\n Digite 10 valores inteiros desejados: \t");
    
    for(int i=0; i<10; i++){
        scanf("%d", &v1[i]);
    }
    
        printf("\n Digite mais 10 valores inteiros desejados: \t");
        
    for(int i=0; i<10; i++){
        scanf("%d", &v2[i]);
    }

    for(int i=0; i<10; i++){
        int v3[9];
        
        v3[i] = v1[i] * v2[i];
        
        printf("\n %d", v3[i]);
    }

}