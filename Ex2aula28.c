#include<stdio.h>
#include<stdlib.h>

int* criavetor(int tam, int valor){
    int* cria = (int*)calloc(tam,sizeof(int));
    *cria = valor;

    return cria;
}
int main(){

    int* v1 = criavetor(5,1);
return 0;

}
