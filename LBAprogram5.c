//WAP to accept a number from user and check if a given number is withina specified range (e.g., between 10 and 20).
#include<stdio.h>
int checkRange(int iNum)
{
	int iSmall =10;
	int iLarge  =20;

	if((iNum >=iSmall && iNum<=iLarge))
	{
		   printf("The number %d is within the range %d to %d.\n", iNum, iSmall,iLarge);

	}
	else
	{
		  printf("The number %d is not within the range %d to %d.\n", iNum, iSmall, iLarge);

	}

}
int main()
{
	int iNum = 0;

	  printf("Enter the number\n");
	  scanf("%d",&iNum);
	  checkRange(iNum);
	  return 0;
}