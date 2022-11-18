#include <stdio.h>
// to check greater number among three numbers
int main()
{
    int x, y, z;
    printf("Enter Three numbers\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("%d is greatest", x);
        }
        else
        {
            printf("%d is greatest", z);
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            printf("%d is greatest", y);
        }
        else
        {
            printf("%d is greatest", z);
        }
    }
    
    else if (x == y & y == z && x == z)
    {
        printf("%d", x);
    }

    return 0;
}