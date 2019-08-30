#include<stdio.h>
#include<stdlib.h>
#include<string.h>

   char *string_clone(char *orig)
{
    int i;
    char*dest;

    for(i=0;i<strlen(orig);i++){
        dest[i] = orig[i];
    }
    dest[i]='\0';    
    
    return dest;
}

int main(){

    char str[20] = "ABC";
    char* copia = string_clone(str);
    printf("%s\n", copia); //"ABC"
}