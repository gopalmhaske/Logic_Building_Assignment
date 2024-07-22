//WAP to accept two numbers from user Check if the sum of two given numbers is even.

#include<stdio.h>
int checkSumEven(int iFirstNum ,int iSecNum)
{
	int iSum=0;
	iSum=iFirstNum +iSecNum;

	printf("Sum of two number%d\n",iSum);

	if(iSum %2==0)
	{
		printf("Sum is even%d\n",iSum);

	}
	else
	{
		printf("Sum is not even%d",iSum);

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
	checkSumEven(iFirstNum,iSecNum);
	

	return 0;
	
}