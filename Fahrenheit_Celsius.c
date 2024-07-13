#include<stdio.h>

int main(){
    float f;
    float c;
    scanf("%f",&c);

    f = (c*9/5)+32;

    printf("%0.0f C %0.3f F\n", c, f);
}
