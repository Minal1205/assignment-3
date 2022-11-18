#include <stdio.h>
/*to check whether the roots of the quadratic equation are real and distinct,
real and equal,or imaginary ,*/
//quadratic equationn=ax^2+bx+c
int main()
{
    int b, a, c, discriminant;
    printf("Enter coefficient b\n");
    scanf("%d", &b);
    printf("Enter coefficient a\n");
    scanf("%d", &a);
    printf("Enter coefficient c\n");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        printf("Roots are real and distinct");
    }
    else if (discriminant == 0)
    {
        printf("Roots are real and equal");
    }
    else if (discriminant < 0)
    {
        printf("Roots are imaginary");
    }

    return 0;
}