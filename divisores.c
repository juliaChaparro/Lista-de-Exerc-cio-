#include<stdio.h>

int main(){
    int i; 
    int x;

    scanf("%d",&x);

    for (i= 1;i<=x;i++){
        if (x % i == 0){
            printf("%d\n",i);
        }
    }
}
