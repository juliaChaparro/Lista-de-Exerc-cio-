#include<stdio.h>

int main(){
    float i;
    float maior;
    float menor;
    int x = 0;

    scanf("%f",&i);
    maior = i;
    menor = i;

    while (x<4){
        scanf("%f",&i);

        if (i > maior){
            maior = i;
        }
        if (i < menor){
            menor = i;
        }
        x++;
    }
    printf("O maior numero digitado foi %0.2f, e o menor foi %0.2f\n",maior,menor);
}