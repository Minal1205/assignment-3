#include <stdio.h>
//to check triangle is valid or not
int main()
{
    int x, y, z;
    printf("Enter Sides of Triangle\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x + y > z || x + z > y || y + z > x)
    {
        printf("Valid Triangle");
    }
    else
        printf("Invalid triangle");
    return 0;
}