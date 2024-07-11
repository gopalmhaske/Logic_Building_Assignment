//WAP to accept a number from user Check if a given number is greaterthan 100.
#include<stdio.h>
int checkGreatherNum(int iNum)
{
	if( iNum >100)
	{
	  printf(" %dThe number is greater than 100.\n", iNum);
	  	}
	  	else
	  	{
	  	  printf(" %dThe number is not greater than 100.\n", iNum);

	  	}
}
int main()
{
	int iNum =0;

	printf("enter the number \n");
	scanf("%d",&iNum);

	checkGreatherNum(iNum);
	return 0;
}