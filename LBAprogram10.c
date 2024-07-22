//WAP to accept two numbers from user Check if the product of two givennumbers is odd.
#include<stdio.h>
int checkSumOdd(int iFirstNum ,int iSecNum)
{
	int iProduct=0;
	iProduct=iFirstNum +iSecNum;

	printf("Sum of two number%d\n",iProduct);

	if(iProduct % 2 !=0)
	{
		printf("Sum is odd%d\n",iProduct);

	}
	else
	{
		printf("Sum is not odd %d",iProduct);

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
	checkSumOdd(iFirstNum,iSecNum);
	

	return 0;
	
}