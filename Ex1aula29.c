#include<stdio.h>
#include<stdlib.h>

int* clone(int *v, int tam){
    
    int i, j;
    int *clonis;
    for(i=0;i<tam;i++){
        clonis[i]=v[i];
    }
    return clonis;
}
void printavetor(int*v,int tam){
    int i; 
    for(i=0;i<tam;i++){
        printf("%d",v[i]);
    }
}
void clone2(int *v,int tam, int**v2){

    int *v2;
    int i; 
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

int main(){

    int v[5] = {0,1,2,3,4};
    int *clone1 = clone(v,5);
    int *clone2;
    printavetor(v,5);
    return 0;
    
}
