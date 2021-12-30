#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    if(n<=9 && n>=0)
    {
    for(int i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d",s);
    }
    else if(n<0)
    {
        printf("Negative Number");
    }
    else
    {
         printf("Too big a number");
    }
}

