#include <stdio.h>
// to check whether a student is pass or fail in 5 subjects,minimum passing marks is 33
int main()
{
    float phy, chem, maths, english, hindi;
    printf("Enter Pysics marks\n");
    scanf("%f", &phy);
    printf("Enter Chemistry marks\n");
    scanf("%f", &chem);
    printf("Enter Maths marks\n");
    scanf("%f", &maths);
    printf("Enter English marks\n");
    scanf("%f", &english);
    printf("Enter Hindi marks\n");
    scanf("%f", &hindi);
    float total;
    total = (phy + chem + maths + english + hindi);
    float total_perc = (total / 500) * 100;
    if (total_perc >= 33)
    {
        printf("You got %0.2f%%\n", total_perc);
        printf("You are pass");
    }
    else
    {
        printf("You got %0.2f%%\n", total_perc);
        printf("You are fail");
    }

    return 0;
}