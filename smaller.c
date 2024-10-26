//Program to find if the values are less

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare num1,num2
    num1 = 150;
    num2 = 189;
    if (num1 < num2) //Here it will check that if num1 is less than num2
    {
        printf("%d is less than %d\n", num1, num2);
    } 
    else //if the 1st condition is not satisfied
    {
        printf("%d is greater than %d\n", num1, num2);
    }

    return 0;
}
