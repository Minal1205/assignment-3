#include<stdio.h>
//to check given number is positive,negative or zero
int main(){
    int num;
    printf("Enter Number \n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("Number is positive");
    }
    else if (num<0)
    
    {
        printf("Number is negative");
    }
    else{
    printf("Number is zero");
    }
    return 0;
}