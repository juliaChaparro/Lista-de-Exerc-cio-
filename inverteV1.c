#include<stdio.h>

int main(){
    int vet [8];
    int i=0,j=7;
    int aux;
    int x;
    int fds;


    for(fds = 0 ;fds<8;fds++){
        scanf("%d",&x);
        vet[fds]= x;
    }

    while (i < j){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        i++;
        j--;
    }

    for(i=0;i<8;i++){
        printf("%d\n",vet[i]);
    }
}
