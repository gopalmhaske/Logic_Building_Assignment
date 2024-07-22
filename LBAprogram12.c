//WAP to accept two numbers from user Check if the difference betweentwo given numbers is positive
#include<stdio.h>
int checkSumDifference(int iFirstNum ,int iSecNum)
{
	int iDifference=0;
	iDifference=iFirstNum - iSecNum;

	printf("checkSumDifference %d\n",iDifference);

	if(iDifference >0 )
	{
		printf("checkSumDifference positive  %d\n",iDifference);
	}
	else
	{
		printf("checkSumDifference not  positive   %d",iDifference);

	}
	
}

int main()
{
	int iFirstNum= 0;
	int iSecNum =0;

	printf("Enter the first number \n");
	scanf("%d",&iFirstNum);

	printf("Enter the second number ");
	scanf("%d",&iSecNum);
	checkSumDifference(iFirstNum,iSecNum);
	

	return 0;
	
}