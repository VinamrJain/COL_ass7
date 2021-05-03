#include <stdio.h>
#include <stdlib.h>
void main(){
int n;
scanf("%d%*c",&n);
char *w = (char*)calloc(n+1,sizeof(char));
fgets(w,n+1,stdin);
int sum = 0;
if (w[0] == ' ' || w[0]=='\t' )
{
    printf("%d",0);
    return;
}
for (int i = 1; i < n; i++)
{
    if ((w[i] == ' ' || w[i] == '\t') && (w[i-1] != ' ') && w[i-1] != '\t')
    {
        sum++;
    }
}
sum++;
printf("%d",sum);
free(w);
}


