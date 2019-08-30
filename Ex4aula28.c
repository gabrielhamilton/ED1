
int* intercala_a(int *v1,int tam, int *v2, int tam2){

    int i, j=0,k=0; 
    int *v3;
    for ( i=0; i<(tam+tam2); i++){
            if(i%2 == 0 ){
                v3[i] = v1[j];
                j++;
            }else
            {
                v3[i] = v2[k];
                k++;
            }
        }
    return v3;
    }

int intercala_b(int*v1, int tam1, int*v2, int tam2, int*v3){
    int i, j=0,k=0;
    for ( i=0; i<(tam1+tam2); i++){
            if(i%2 == 0 ){
                v3[i] = v1[j];
                j++;
            }else
            {
                v3[i] = v2[k];
                k++;
            }
        printf("%d", v3[i]);
        }
    return v3;
}
int main(){
    int v1[3] = {2,4,6};
    int v2[4] = {3,5,7,9};
    int v3[7];
    int *v4;
    v4 = intercala_a(v1, 3, v2, 4);
    intercala_b(v1, 3, v2, 4, v3);
}