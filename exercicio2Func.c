#include <stdio.h>
#include <stdlib.h>

int conceito(int x){

    if (x>=9)
    {
        return printf("A");
    }
    else if (x>=7 && x<9)
    {
        return printf("B");
    }
    else if (x>=6 && x<7)
    {
        return printf("C");
    }
}
int main(){

    float nota = 9;
    conceito(nota);

return 0;

};
