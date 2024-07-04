#include<stdio.h>

/**********************************************************
 //FUNCTION NAME: Modulus
 //DESCRIPTION: It is used to perform the add of two numbers
 //INPUT: integer, integer
 //OUTPUT: integer
 //DATE: 
 //AUTHOR: Gopal  
 **********************************************************/
int Modulus(int iValue1, int iValue2)
{
	if (iValue2 != 0)
	 {
        return (int)iValue1 % iValue2;
    } else 
    {
        printf("Error: Modulus by zero.\n");
        return 0; 
    }
}
/**********************************************************
 //FUNCTION NAME: main
 //DESCRIPTION: It's entry point function
 //INPUT: NA
 //OUTPUT: NA
 //DATE: 
 //AUTHOR: Gopal 
 **********************************************************/
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iResult = 0.0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);

	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iResult = Modulus(iFirstNum, iSecNum);

	printf("Modulus is = %d", iResult);
	
	return 0;
}