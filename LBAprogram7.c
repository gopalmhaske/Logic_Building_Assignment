//WAP to accept a number from user check if a given integer is divisible by10.

#include<stdio.h>
int checkDivi(int iNum)
{
	if(iNum% 10==0)
	{
	 printf(" %dThe number  is divisible by 10.\n", iNum);
	}
	else
	{
         printf(" %dThe number  is not divisible by 10.\n", iNum);
	}
}
int main ()
{
	int iNum =0;
	printf("Enter the number \n");
	scanf("%d",&iNum);
	checkDivi(iNum);
	return 0;
}