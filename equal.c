//Program to find if the value is equal

#include <stdio.h>

int main() 
{
    int num1, num2;
    num1 = 100;
    num2 = 20;
    if (num1 == num2) 
    {
        printf("%d is equal %d\n", num1, num2);
    } 
    else
    {
        printf("%d is greater than or less than %d\n", num1, num2);
    }

    return 0;
}