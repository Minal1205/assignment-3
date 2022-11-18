#include <stdio.h>
/*a program which takes the month number as an input and display number of
days in that month.*/
int main()
{
    int month;
    printf("Enter Month Number\n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Month has \"31\" days");
    }
    else if (month == 2)
    {
        printf("28 days in normal year\n 29 days in leap year");
    }
    else
        printf("month has 30 days");

    return 0;
}