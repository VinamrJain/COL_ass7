#include <stdio.h>
void main(){
    int n,b;
    scanf("%d%d",&n,&b);
    int A[n];
    int dup[n];
    int p =0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { int flag = 1;
            for (int k = 0; k < p; k++)
            {
                if (dup[k] == A[i])
                {
                    flag = 0;
                }
            }
            if (i !=j && A[j]==b-A[i] && flag)
            {
                printf("%d %d\n",A[i],A[j]);
                dup[p] = A[j];
                dup[p+1] = A[i];
                p +=2;
                break;
            }
        }
    }
}