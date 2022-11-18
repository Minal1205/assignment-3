#include<stdio.h>
//to check alphabet is uppercase or lowercase
int main(){
    char ch;
    printf("Enter Alphabet\n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("%c is uppercase alphabet",ch);
    }
    else if (ch>=97&&ch<=122)
    {
        printf("%c is lowercase alphabet",ch);
    }
    
    
    return 0;
}