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
int *y = (int*)malloc(n*sizeof(int));
int p = 0;
for (int i = 0; i < n; i++)
{
 int flag = 0;
    for (int k = 0; k < p; k++)
    {   
        if (x[i] == y[k])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        y[p] = x[i];
        p++;
    }
}
printf("%d\n",p);
for (int i = 0; i < p; i++)
{
    printf("%d ",y[i]);
}
}



