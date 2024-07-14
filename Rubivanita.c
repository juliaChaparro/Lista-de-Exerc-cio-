#include <stdio.h>

int main(){
    
    int Tibares;
    int durante;
    int cont = 0;
    int quantoSobrou = 0;
    scanf( "%d",&Tibares);

    while (Tibares > 15){
        Tibares = Tibares - 15;

        cont = cont+1;
        quantoSobrou = Tibares;
        
    }
    durante = 6*cont;

    printf("Mauricio pode comprar %d kg de rubivanita, que irao durar %d horas de viagem.\n", cont,durante);
    printf("Mauricio ficara com %d tibares.\n",quantoSobrou);
}