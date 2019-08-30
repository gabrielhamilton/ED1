#include<stdio.h>

void vetor_inicializar(int* v, int tam){
    int i;
        for(i = 0; i < tam; i++){
        v[i] = i;
    // *(v + i) = valor;
        }
    }
void printvetor(int*v, int tam){
    int i;
    printf("[");
    for(i=0;i<tam;i++){
        printf(",");
        printf("%d", v[i]);
    }
    printf("]");
}

int main(){

    int v1[5];
        vetor_inicializar(v1, 5);
        printvetor(v1,5); 

}