#include <stdio.h>
//to check whether a number is divisible by 2 and 3
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0)
    {
        printf("%d is divisible by both \"2\" and \"3\"", num);
    }
    else if (num % 2 == 0 && num % 3 != 0)
    {
        printf("%d is divisible by \"2\" but not \"3\"", num);
    }
    else if (num % 2 != 0 && num % 3 == 0)
    {
        printf("%d is divisible by \"3\" but not \"2\"", num);
    }
    else
    {
        printf("%d is not divisible by both \"2 and 3\"", num);
    }

    return 0;
}