#include <stdio.h>


int main (){
    float a[4];
    float b[4];
    float c[4];
    int i=0;
    int j = 0;
    float x;
    int k;

    while (i < 4){
        scanf("%f",&x);
        a[i] = x;
        i++;
    }
    while(j < 4){
        scanf("%f",&x);
        b[j] = x;
        j++;
    }
    for (k= 0; k < 4;k++){
        c[k] = a[k]*b[k];
        printf("%0.4f\n", c[k]);
    }
}
