/* Algorithm
01. Start
02. Accept the value and run it with the given formula
03. Display the result obeying the given conditions
04. Stop */

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

/* Output:
Run - 1
5
120

Run - 2
9
362880
*/
