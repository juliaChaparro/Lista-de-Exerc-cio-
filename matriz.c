#include <stdio.h>

int main()
{
    int a[2][2]={{0,0},{0,0}};
    int b[2][2]= {{0,0},{0,0}};
    int c[2][2] ={{0,0},{0,0}};
    int i=0;
    int j=0;
    int x=0;

    int p=0;
    int l=0;
    int cl=0;
    int cf=0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &x);
            a[i][j] = x;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &p);

            b[i][j] = p;
        }
    }

    for (l = 0; l < 2; l++){
        for (cl = 0; cl < 2; cl++){
            for (int k = 0; k<2;k++){
                c[l][cl] +=(a[l][k]*b[k][cl]);
            }
        }
    }

    for (l = 0; l < 2; l++)
    {
        for (cf= 0; cf < 2; cf++)
        {
            printf("%d ", c[l][cf]);
        }
        printf("\n");
    }
}
