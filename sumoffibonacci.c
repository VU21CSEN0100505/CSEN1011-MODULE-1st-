/*Algorithm
Step1 - Start
Step2 - get nth term of fibo series from user
Step3 - get fibonacci series but with each loop, add value to a variable
Step4 - print value in variable
Step5 - Stop.*/


#include <stdio.h>
#include <math.h>
int main()
{
      int f1,f2,f3,n,i=2,s=1;
      f1=0;
      f2=1;
      printf("How many terms do you want in Fibonacci series? : ");
      scanf("%d",&n);
      printf("\nFibonacci Series Upto %d Terms:\n\n",n);
      printf("%d, %d",f1,f2);
      while(i<n)
      {
            f3=f1+f2;
            printf(", %d",f3);
            f1=f2;
            f2=f3;
            s=s+f3;
            i++;
      }
      printf("\n\nSum of Fibonacci Series : %d",s);
      return 0;
}
