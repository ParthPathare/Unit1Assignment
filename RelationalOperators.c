#include <stdio.h>

int main()
{
    int a = 71, b = 54;

    printf("Relational Operators:\n");
    
    printf("a < b: %s\n", (a < b) ? "True" : "False");       // Here it will tell us if 'a' is less than 'b'

    printf("a <= b: %s\n", (a <= b) ? "True" : "False");     // Here it will tell us if 'a' is less than or equal to 'b'

    printf("a > b: %s\n", (a > b) ? "True" : "False");       // Here it will tell us if 'a' is greater than 'b'
    
    printf("a >= b: %s\n", (a >= b) ? "True" : "False");     // Here it will tell us if 'a' is greater than or equal to 'b'
    
    printf("a == b: %s\n", (a == b) ? "True" : "False");     // Here it will tell us if 'a' is equal to 'b'
    
    printf("a != b: %s\n", (a != b) ? "True" : "False");     // Here it will tell us if 'a' is not equal to 'b'

    return 0;
}
