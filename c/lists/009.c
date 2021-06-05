#include <stdio.h>

void validacao(float x, float y, float z){
    
    if(x<y+z && y<x+z && z<x+y){
        printf("\t Os valores digitados formam um triângulo. \n");
        
        if(x==y && x==z){
            printf("\t Triângulo Equilátero.");
        }else if(x==y || x==z || y==z){
            printf("\t Triângulo Isósceles.");
        }else{
            printf("\t Triângulo Escaleno.");
        }
    }else{
        printf("\t Tais valores não formam um triângulo.");
    }
}

int main(){
    
    float x, y, z;

    printf("Digite os valores do triângulo: \t");
    scanf("%f %f %f", &x, &y, &z);
    
    validacao(x, y, z);
}