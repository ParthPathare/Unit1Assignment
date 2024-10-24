//Program to find if the values are less

#include <stdio.h>

int main() 
{
    int num1, num2;
    num1 = 100;
    num2 = 200;
    if (num1 < num2) 
    {
        printf("%d is less than %d\n", num1, num2);
    } 
    else
    {
        printf("%d is greater than %d\n", num1, num2);
    }

    return 0;
}