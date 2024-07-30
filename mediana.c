#include<stdio.h>

void selection(float vet[],int tam){
    int i=0,j=0;
    int menor, aux;

    for(i=0;i<tam-1;i++){
        menor = i;
        for(j = i+1;j<tam;j++){
            if (vet[j] < vet[menor]){
                menor = j;
            }
        }
        if (i != menor){
            aux = vet[i];
            vet[i] = vet [menor];
            vet[menor]= aux; 
        }
    }
}

float mediana(float vet[],int tam){
    float i=0.0, j=0.0;
    if (tam % 3 != 0){
        i = vet[tam/2];
    }
    else{
        i = (vet[(tam)/2]+vet[(((tam)/2)-1)])/2;
        j++;
        
    }
    return i;

}

int main(){

    int i, j,x;
    float vet[6];

    while (i != 6){
        scanf("%d",&x);
        vet[i]= x;
        i++;
    }
    selection(vet,6);

    printf("%0.2f\n", mediana(vet, 6));

}