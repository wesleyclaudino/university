#include <stdio.h>
#include <stdbool.h>

bool availableTriangle(float x, float y, float z){

    bool available;
    
    if(x<y+z && y<x+z && z<x+y){
        available = true;
    }else{
        available = false;
    }
    
    return available;
}

void typeTriangle(float x, float y, float z){

    if(x==y && x==z){
        printf("\t Triângulo Equilátero.");
    }else if(x==y || x==z || y==z){
        printf("\t Triângulo Isósceles.");
    }else{
        printf("\t Triângulo Escaleno.");
    }
}

int main(){
    
    float x, y, z;
    bool available;

    printf("Digite os valores do triângulo: \t");
    scanf("%f %f %f", &x, &y, &z);
    
    available = availableTriangle(x, y, z);
    
    if(available == true){
        printf("\n Os valores formam um");
        typeTriangle(x, y, z);
    }else{
        printf("\n \t Os valores fornecidos não formam um triângulo.");
    }
    
    return 0;
}