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
{
for (int j = 0; j <=n-i-1; j++)
{   int sum = 0;
    for (int k = 0; k <= j; k++)
    {
        sum += x[i+k];
    }
    if (sum == 0)
    {
        printf("True");
        return;
    }
}   
}
printf("False");
free(x);
}