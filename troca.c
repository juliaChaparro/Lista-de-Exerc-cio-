#include <stdio.h>
int troca(int* a, int* c) {
    return *c; 
}

int main(){
    int a=0;
    int b=0;
    int c=0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("a: %d\n",troca(&a,&c));
    printf("b: %d\n",troca(&b,&a));
    printf("c: %d\n",troca(&c,&b));
}