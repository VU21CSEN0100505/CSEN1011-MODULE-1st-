#include<stdio.h>
int main() 
{
  int num, originalNum, remainder, result=0;
printf("Enter a three digit number = ");
scanf("%d",&num);
originalNum = num;

while(originalNum!=0){
  remainder=originalNum%10;

  result+= remainder*remainder*remainder;

  originalNum/=10;
}

if(result==num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);

return 0;
}


/* Output
Enter a three digit number = 370
370  is an Armstrong number.

Enter a three digit number = 277
277  is an Armstrong number.
