#include<stdio.h>


int main(){
    int vet [8];
    int i;
    int x;
    int cont = 0;

    for (i = 0 ;i<8;i++){
        scanf("%d",&x);
        vet[i]= x;
        cont ++;
    }
    while(cont!=0){
        printf("%d\n",vet[cont-1]);
        cont --;
    }
}
