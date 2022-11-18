#include <stdio.h>

int main()
/*to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
{
    char c;
    printf("Enter character\n");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
        printf("Uppercase letter");
    else if (c >= 97 && c <= 122)
        printf("Lowercase letter");
    else if (c >= 48 && c <= 57)
        printf("It is a digit");
    else
        printf("Special character");

    return 0;
}