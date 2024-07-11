#include <stdio.h>
void displayNumber(int iNum)
{
  if (iNum > 0) 
    {
        printf(" The number is positive.\n");
    } 
    else if (iNum < 0)
     {
        printf(" The number is negative.\n");
    } else 
    {
        printf(" The number is zero.\n");
    }

}

int main() 
{
    int  iNum = 0;

    
    printf("Enter any number: ");
    scanf("%d", &iNum);
    displayNumber(iNum);

    return 0;
}
