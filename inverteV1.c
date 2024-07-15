#include<stdio.h>

int main(){
    int vet [8]={1,2,,3,4,5,6,7,8};
    int i=0,j=8;
    int x;
    int cont = 0;
    int aux = i ;


    while (i < j){
        vet[aux] = vet[i];
        vet[i]=vet[j];
        vet[j]= vet[aux];

        aux ++;
        i++;
        j--;
    }

    for(i=0;i<8;i++){
        printf("%d\n",vet[i]);
    }

}
