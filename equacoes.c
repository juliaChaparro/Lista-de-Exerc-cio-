#include<stdio.h>

int main(){
    float qualquer;
    int maior=0;
    int menor = 0;
    int sob;
    int prod;
    float div;
    int soma;
    float n1;
    float n2;

    scanf("%f",&n1);
    scanf("%f", &n2);

    soma = n1 +n2;
    sob = n1 - n2;
    prod = n1 * n2;
    div = (n1/ n2);

    if (n1 < n2){
        menor =  n1;
        maior = n2;
    }else{
        menor = n2;
        maior = n1;
    }
    
    printf("O numero maior eh %d, e o menor eh %d\n",maior, menor);
    printf("A soma dos numeros eh %d\n", soma);
    printf("A subtracao dos numeros eh %d\n", sob);
    printf("O produto dos numeros eh %d\n",prod);
    printf("O quociente dos numeros eh %0.2f\n", div);
}