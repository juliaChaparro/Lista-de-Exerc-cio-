#include<stdio.h>

int main(){
    int hora = 60;
    int  seg = 60;
    int n;
    float m;
    int eq;
    scanf("%d",&n);

    eq = n / hora;
    m = n % hora;

    printf("%d horas e %0.0f minutos\n",eq, m);
}