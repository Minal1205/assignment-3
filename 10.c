#include <stdio.h>
// to calculate profit percentage and loss percentage
int main()
{
    float cp, sp;
    printf("Enter Cost Price\n");
    scanf("%d", &cp);
    printf("Enter Selling Price\n");
    scanf("%d", &sp);
    if (sp > cp)
    {
        float profit = sp - cp;
        float profitpercentage = profit / cp * 100;
        printf("profit percentage =%0.2f%%", profitpercentage);
    }
    else if (cp > sp)
    {
        float loss = cp - sp;
        float losspercentage = loss / cp * 100;
        printf("loss percentahe=%0.2f%%", losspercentage);
    }
    return 0;
}