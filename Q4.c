#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    scanf("%d",&n);
    int *x = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < n; i++)
    {int a =0;
        for (int j = 0; j < n; j++)
        {
            if (x[i] == x[j] && i != j)
            {
                a = 1;
            }
            if (a)
            {
                break;
            }
        }
     if (a == 0)
     {
        printf("%d",x[i]);
        break;
     }
    }
    free(x);
}