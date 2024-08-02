#include<stdio.h>

int main(){
    char a;
    int i;
    float f;

    scanf("%s",&a);
    scanf("%d",&i);
    scanf("%f",&f);

    printf("o endereco de x = %p\n",&a);
    printf("o endereco de y = %p\n",&i);
    printf("o endereco de z = %p\n", &f);


    printf("o valor de x = %c\n",a);
    printf("o valor de y = %d\n",i);
    printf("o valor de z = %f\n",f);



    printf("o tamanho de x = %ld\n", sizeof(a));
    printf("o tamanho de y = %ld\n", sizeof(i));
    printf("o tamanho de x = %ld\n", sizeof(f));

}