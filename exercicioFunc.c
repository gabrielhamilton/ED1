#include <stdio.h>

int inverso(int x){

    if(x == 0) 
    return x;
    else 
    {
       printf("%d", x%10);
       int n = x/10;
       return inverso(n);
        
    }
}
int main(){

    int x = 2;
    inverso(x);

return 0; 

}