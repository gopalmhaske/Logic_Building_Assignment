//WAP to accept two numbers from user Check if a first number is divisibleby second number
#include<stdio.h>
int checkDivi(int iFirstNum ,int iSecNum)
{
	if(iFirstNum % iSecNum == 0)
	{
		printf("The first number %d is divisible by the second number %d.\n", iFirstNum, iSecNum);
	}
	else
	{
		 printf("The first number %d is not divisible by the second number %d.\n", iFirstNum, iSecNum);
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
	checkDivi( iFirstNum ,iSecNum);

	return 0;
	
}