#include<stdio.h>

/**********************************************************
 //FUNCTION NAME: Multiplication
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 
 //AUTHOR: Gopal  
 **********************************************************/
int Multiplication(int iValue1, int iValue2)
{
	return iValue1*iValue2;
}

/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 05/06/2024
 //AUTHOR: Gopal 
 **********************************************************/
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iResult = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iResult = Multiplication(iFirstNum, iSecNum);

	printf("Multiplication is = %d", iResult);
	
	return 0;
}