#include <stdio.h>
#include <stdbool.h>
bool prime(int x){
    if (x == 1)
    {
        return false;
    } 
for (int i = 2; i*i <=x ; i++)
{
    if (x%i==0)
    {
        return false;
    }
}
return true;
}
void main(){
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= n/2; i++)
    {
        if (prime(i)&&prime(n-i))
        {
            printf("true");
            return;
        }
    }
    printf("False");
}