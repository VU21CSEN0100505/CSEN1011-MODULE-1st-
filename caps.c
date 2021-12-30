/* Algorithm
01. Start
02. Accept the alphabet and change it into its capital if given small, into its small if given capital
03. Display the result
04. Stop */


#include<stdio.h>
int main()
{
char i;
scanf("%c",&i);
if(i>=97 && i<=122)
{
	i=i-32;
	printf("%c",i);
}
else if(i>=65 && i<=90)
{
i=i+32;
printf("%c",i);
}
else
{
printf("Incorrect data");
}
}

/* Output:
Run - 1
A
a

Run - 2
z
Z

*/
