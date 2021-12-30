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
