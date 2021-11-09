/*****************************************************************
LOGIC :-

ASCII numbers from a-z are from 97 to 97+26

for printing  a-z for the values 1 to 26 is a=a+96

(where a ranges from 1 to 26  so it refers its ASCII values

*******************************************************************/
#include<stdio.h>
void main()
{
	int a ;
	
	printf("enter a number (from 1 to 26) : ");
	
	scanf("%d",&a);
	
	
	a=a+96;
	
	printf("%c", a);
	
}
