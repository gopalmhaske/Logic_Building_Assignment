//WAP to accept a number from user and Check if a given number is amultiple of 2 or 3 or 9.
#include<stdio.h>
int checkMultile( int iNum)
{
	if(iNum%2==0 )
	{
		printf("The number is a multiple of 2\n");
	}
	else if(iNum%3==0)
	{
		printf("The number is a multiple of 3\n");
	}
	else if(iNum%9==0)
	{
		printf("The number is a multiple of 9\n");
	}
}
int main()
{
	int iNum = 0;

	printf("Enter any  number \n");
	scanf("%d",&iNum);
	checkMultile(iNum);
	return 0;
}