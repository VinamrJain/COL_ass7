#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    int **w = (int**)calloc(n,sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        w[i] = (int*)calloc(n,sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&w[i][j]);
        }
    }

    int flag = 0;
    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < n; q++)
        {
            if (w[p][q]!=w[q][p])
            {
                flag = 1;
                break;
            } 
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        printf("Not Symmetric");
    }
    else
    {
        printf("Symmetric");
    }
    free(*w);

}
