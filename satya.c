#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\n signed: %hd to %hd",SHRT_MIN,SHRT_MAX);
	printf("\n unsigned: %d to %hu",0,USHRT_MAX);
		
	printf("\n\n int:\n signed: %d to %d",INT_MIN,INT_MAX);
	printf("\n unsigned: %d to %u",0,UINT_MAX);
	
	printf("\n\n long int: \n signed: %ld to %ld",LONG_MIN,LONG_MAX);
	printf("\n unsigned: %d to %lu",0,ULONG_MAX);
	
	printf("\n\n long long int: \n signed: %lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\n unsigned: %d to %llu",0,ULONG_LONG_MAX);
}
