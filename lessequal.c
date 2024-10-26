//Program to find if the values is lessthan or equal

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare num1&num 2 in int
    num1 = 10;
    num2 = 10;
    if (num1 <= num2) // Here it will check that is num1 less than or equal to num2
    {
        printf("%d is less than or equal %d\n", num1, num2);
    } 
    else if (num1 > num2) // if the if condition is not satisfied it will come here
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else // if the 2nd condition is also not satisfied then it will print else condition
    {
        printf("%d is less than %d\n", num1, num2);
    }

    return 0;
}
