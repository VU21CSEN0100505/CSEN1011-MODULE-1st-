#include<stdio.h>
int main()
{
	 float p, t, r, si, ci;
	
	 printf("principal = ");
	 scanf("%f", &p);
	 printf("time period = ");
	 scanf("%f", &t);
	 printf("rate of interest ");
	 scanf("%f", &r);
	
	 
	 si = (p * t * r)/100.0;
	
	
	 ci = p * (1+r/100)*t;
	
	 printf("Simple Interest = %0.3f\n", si);
	 printf("Compound Interest = %0.3f", ci);
	 return(0);
}
