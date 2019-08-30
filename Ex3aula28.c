#include <stdio.h>

int maiorvalor(int*v, int tam){

    int i, maior; 
    maior = v[0];
    for(i=0; i<tam; i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    return maior;
}   
int main(){

    int v[5] = {1,10,3,4,5};
    int maior = maiorvalor(v, 5);
    printf("%d", maior);

return 0;
}