/*
Program to convert a binary number into decimal number
created by : AMAL M NAIR
*/
#include<stdio.h>					//header file for standard input and output functions
int pwr(int);						//function prototype  
void main()						//main function
{
	int rem,n,i,sum;				//declaration of variables
	printf("Enter the Binary number\n");
	scanf("%d",&n);					//to take input from user
	i=0;	
	sum=0;						//to avoid garbage value
	while(n>0)
	{		
		rem=n%10;				//to get the last digit
		sum=sum+(rem*pwr(i));			//formula
		i++;
		n=n/10;					//removing last digit
	}
	printf("The Decimal number is :\t%d\n",sum);	//answer
}
int pwr(int a)						//function defiition
{
	int mul=1,i=0;					//intialising and declaration of variables
	for(i=0;i<a;i++)
	mul=mul*2;					
	return mul;					//return the value of 'mul' to function call
}
