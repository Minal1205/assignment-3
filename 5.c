#include <stdio.h>
// to check a number is three digit number or not
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    if (num > 99 && num < 1000)
    {
        printf("%d is three digit number", num);
    }
    else
    {
        printf("%d is not  three digit number", num);
    }

    return 0;
}