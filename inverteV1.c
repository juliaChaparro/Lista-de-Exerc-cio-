#include<stdio.h>


int main(){
    int vet [8];
    int i=0,j=8;
    int x;
    int cont = 0;
    int naosei;
    for (i = 0 ;i<8;i++){
        scanf("%d",&x);
        vet[i]= x;
        cont ++;
    }
    while (i<j){
        vet[i]=vet[j];
        vet [j]=vet [i];
        i++;
        j--;
    }

}
