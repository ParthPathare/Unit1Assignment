//Program to find if the values are greater

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare num and num2 in int "SUM WILL NOT BE DECLARED" 
    num1 = 100;
    num2 = 20; //Give the values to num1&num2
    if (num1 > num2) 
    {
        printf("%d is greater than %d\n", num1, num2);   // Here we will use the if else statement so if num1 is greater than num2 then it will generate
    }                                                    // 100 is greate than 20
    else
    {
        printf("%d is less than %d\n", num1, num2);
    }

    return 0;
}
