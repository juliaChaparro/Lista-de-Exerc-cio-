
#include<stdio.h>

void insertion(int vet[],int tam){
    int i, j, pivot;

    for (i = 1;i<tam;i++){
        pivot = vet [i];
        j = i-1;
        while((j >= 0) && (vet[j]>pivot)){
            vet[j+1]=vet[j];
            j--;
        }
        vet [j+1]= pivot;
    }
}


int main(){

    int i = 0,j=0 ,vet[5];
    int x = 0;

    while (i != 5){
        scanf("%d",&x);
        vet[i]= x;
        i++;
    }

    insertion(vet,5);  

    for(j=0;j<5;j++){
        printf("%d\n",vet[j]);
    }
}
