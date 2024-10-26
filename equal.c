//Program to find if the value is equal

#include <stdio.h>

int main() 
{
    int num1, num2; //Declare the num1,num2,sum
    num1 = 100;
    num2 = 20;   //Give values to num1&num2
    if (num1 == num2) 
    {
        printf("%d is equal %d\n", num1, num2);    //Here we will use if else statement so that it can check the
                                                   // condition and give the output
    } 
    else
    {
        printf("%d is not equal %d\n", num1, num2);
    }

    return 0;
}
