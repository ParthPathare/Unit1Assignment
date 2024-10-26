//Program to find if the value is greater than or equal

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare num1&num 2 in int
    num1 = 1000;
    num2 = 100;

    if (num1 >= num2)  // Here it will check that is num1 grater than or equal to num2
    {
        printf("%d is grater than or equal to %d\n", num1, num2);
    } 
    else if (num1 < num2)    // if the if condition is not satisfied it will come here
    {
        printf("%d is less than %d\n", num1, num2);
    }
    else    // if the 2nd condition is also not satisfied then it will print else condition
    {
        printf("%d is greater than %d\n", num1, num2);
    }

    return 0;
}
