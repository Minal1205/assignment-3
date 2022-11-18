#include<stdio.h>
//to check whether a given number is divisible by 7 or divisible by 3.
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    if (num%7==0&&num%3==0)
    {
        printf("%d is divisible by both 3 and 7",num);
        
    }
    else if(num%3==0){
        printf("%d is divisible by 3",num);

    }
    else if (num%7==0)
    {
        printf("%d is divisible by 7",num);
    }
    
    else
    printf("Not divisible by 3 and 7");
    
    
    return 0;
}