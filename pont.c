#include<stdio.h>

int main(){
    char a;
    int i;
    float z;

    scanf("%s",&a);//x
    scanf("%d",&i);//y
    scanf("%f",&z);//z

    char *px = &a;
    int *py = &i;
    float *pz = &z;
    
    printf("\n");

    printf("o endereco de x = %p\n",&a);
    printf("o endereco de y = %p\n",&i);
    printf("o endereco de z = %p\n", &z);

    printf("o endereco de px = %p\n",&px);
    printf("o endereco de py = %p\n",&py);
    printf("o endereco de pz = %p\n", &pz);

    printf("\n");

    printf("o valor de x = %c\n",a);
    printf("o valor de y = %d\n",i);
    printf("o valor de z = %f\n",z);

    printf("o valor de px = %c\n",a);
    printf("o valor de py = %d\n",i);
    printf("o valor de pz = %f\n",z);

    printf("\n");

    printf("o tamanho de x = %ld\n", sizeof(a));
    printf("o tamanho de y = %ld\n", sizeof(i));
    printf("o tamanho de x = %ld\n", sizeof(z));
    printf("o tamanho de x = %ld\n", sizeof(px));
    printf("o tamanho de y = %ld\n", sizeof(py));
    printf("o tamanho de x = %ld\n", sizeof(pz));

}