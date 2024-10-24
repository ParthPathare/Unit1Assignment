//Program to find if the value is greater than or equal

#include <stdio.h>

int main() 
{
    int num1, num2;
    num1 = 100;
    num2 = 100;
    if (num1 >= num2) 
    {
        printf("%d is equal %d\n", num1, num2);
    } 
    else
    {
        printf("%d is less than %d\n", num1, num2);
    }

    return 0;
}