//Program to find if the values are not equal

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare num1,num2
    num1 = 100;
    num2 = 20; // Give values to num1 and num2
    if (num1 != num2) //Here it will check if num1==num2 or num1!=num2
    {
        printf("%d is not equal %d\n", num1, num2);
    } 
    else //If 1st condition is not satisfied it will use this statement
    {
        printf("%d is greater than or less than %d\n", num1, num2);
    }

    return 0;
}
