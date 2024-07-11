//WAP to accept a number from user and Check if a given number is amultiple of both 3 or 9.

#include<stdio.h>
#include <stdbool.h>

bool checkMultiple(int iNum)
{
	if((iNum%3==0)&&(iNum%9==0)&&(iNum%2==0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNum = 0;
	bool bRet = false;

	printf("Enter any number:\n");
	scanf("%d", &iNum);

	bRet = checkMultiple(iNum);

	if(bRet == true)
	{
		printf("Number is multiple of 2,3 and 9\n");
	}
	else
	{
		printf("Number is not multiple of 2,3 and 9\n");
	}
	return 0;
}