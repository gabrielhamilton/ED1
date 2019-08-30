#include<stdio.h>
#include<stdlib.h>

int* vetor_dobraTamanho(int**v, int tam){

    int v1[2*tam];
    int i;
    for(i=0;i<2*tam;i++){
        v[i] = 0;
    }
    for(i=0;i<tam;i++){
        v1[i] = v[i]; 
    }

    return v1;

}

int main(){
    
    int* v = (int*) calloc(3, sizeof(int));
    
    v[3] = {2,4,6};
    
    int novoTamanho = vetor_dobraTamanho(&v,3);
    //Resultado esperado
    // [2,4,6,0,0,0]
}