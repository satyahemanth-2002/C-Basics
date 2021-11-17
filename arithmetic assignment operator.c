#include<stdio.h>
void main()
{
	
	int x = 10 , y = 4 , z = 3 ;
	x += y ; // x = x+y = 10+4  =14
	y -= z ; // y = y-z = 4-3   =1
	z += x ; // z = z+x = 3+14  =17
	y *= x ; // y = y*x = 1*14  =14
	x *= z ; // x = x*z = 14*17 =238
	printf(" %d , %d , %d",x,y,z);
	
}
