#include<stdio.h>


int main(){
    int i=0;
    float cont=0;
    float x;
    float media;

    while (x != 0){
        scanf("%f",&x);
        cont = cont +x;
        i++;
    }
    media = cont / (i-1);
    printf("A media dos numeros digitados eh %0.2f\n",media);    
}