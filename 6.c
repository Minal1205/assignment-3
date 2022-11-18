#include <stdio.h>
/*to check the greater number
between two numbers ,if both
are equal return 1*/
int main()
{
    int x, y;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("%d is greater than %d", x, y);
    }
    else if (y > x)
    {
        printf("%d is greater than %d", y, x);
    }
    else
    {
        printf("%d", x);
    }

    return 0;
}