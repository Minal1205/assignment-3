#include <stdio.h>
// to check number is even or odd using bitwsie
int main()
{
    int x;
    printf("Enter Number\n");
    scanf("%d", &x);
    if (x & 1 == 1)
    {
        printf("Number is odd");
    }
    else
    {
        printf("Number is even");
    }
    return 0;
}