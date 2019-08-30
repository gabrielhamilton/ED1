#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* gerar_vetor_aleatorio(int n){
    int i;
    int* v;
    v = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
        v[i] = rand() % (n*10);
    }
    return v;
}
void imprimir_vetor(int* v, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d,", v[i]);
        fflush(stdout);
    }
    printf("\n");
}
int main(int argc, char** argv){
    
    int* v = NULL;
    int n = 0;
    int i;
    n = atoi(argv[1]);
    srand(0);
    v = gerar_vetor_aleatorio(n);
    imprimir_vetor(v, n);
    return 0;
}