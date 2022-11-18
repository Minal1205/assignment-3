#include <stdio.h>
// to check the given number is divisible by 5 or not
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("%d is divisble by 5", x);
    }
    else
    {
        printf("%d is not divisible by 5", x);
    }

    return 0;
}