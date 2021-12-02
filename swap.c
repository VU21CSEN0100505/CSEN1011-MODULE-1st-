/*Algorithm

01. Start 
02. Accept first value (a), second value (b)
03. Display swap of two numbers after evaluating a=a+b, b=a-b, a=a-b.
04. Stop */

#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
} 


/* Output: 
Run - 1
a = 10
b = 20
after swap a=20, b=10

Run - 2
a = 20
b= 50
after swap a=50, b= 20

Run - 3
a = 175
b = 114
after swap a=114, b=175 */
