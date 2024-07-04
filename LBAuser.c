#include<stdio.h>
/**********************************************************
 //FUNCTION NAME: display 
 //DESCRIPTION: It is used to perform the 100 time  Splendid Infosystems
 //INPUT: integer, 
 //OUTPUT: Splendid Infosystems 
 //DATE: 
 //AUTHOR: Gopal  
 **********************************************************/
int  display( int iValue)
{


	for( int iCnt=0;iCnt<iValue;iCnt++)
		

	{
		printf("Splendid Infosystems\n%d",iCnt);

	}
};
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
	int iCnt=0;
	printf("how many type you want to print?\n");
	scanf("%d",&iCnt);
	display(iCnt);
	

	return 0;
}