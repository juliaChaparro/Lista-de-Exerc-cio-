#include<stdio.h>

int main(){
    int mata [3][3];
    int matb [3][3];
    int i;
    int j;
    int x;
    int c =0;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&x);
            mata[i][j]=x;
        }
    }

    for (int l=0;l<3;l++){
        for (int c=0;c<3;c++){
            matb [l][c]= mata[c][l];
        }
    }

    for(int l=0;l<3;l++){
        for (int c=0;c<3;c++){
                printf("%d ",matb[l][c]);
        }
        printf(" \n");
    }
}
