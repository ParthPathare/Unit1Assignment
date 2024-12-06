#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    printf("Enter a number or string to check if it's a palindrome: ");
    scanf("%s", str);

    strcpy(reversed, str);
    strrev(reversed); // Reverse the string

    if (strcmp(str, reversed) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
