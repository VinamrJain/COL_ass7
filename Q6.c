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
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (x[i]<x[j])
        {
            int t = x[i];
            x[i] = x[j];
            x[j] = t;
        } 
    }
}
printf("%d",x[n-2]);
free(x);
}