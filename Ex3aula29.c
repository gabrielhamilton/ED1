#include<stdio.h>
#include<stdlib.h>

void vetor_incrementa(int*v,int tam){

    int i;
    for(i=0;i<tam;i++){
        v[i] = v[i]+ 1; //kkkk ta eu sei que isso é bem preguiçoso;
    }
}

int main(){

    int v1[5] = {10,20,30,40,50};
    vetor_incrementa(v1, 5); // [11,21,31,41,51]
}