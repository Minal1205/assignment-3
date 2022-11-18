#include <stdio.h>
// to check given number is odd or even
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d is even", x);
    }
    else
        printf("%d is odd", x);

    return 0;
}