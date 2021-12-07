#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    for(i = 1; i<num; i++)
    {
        if((num%i) == 0)
        {
            sum=sum+ i;
        }
    }

    if(num==sum)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}


/* Output
Enter any number to check perfect number: 6
6 is PERFECT NUMBER

Enter any number to check perfect number: 28
27  is NOT PERFECT NUMBER
