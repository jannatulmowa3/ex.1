#include<stdio.h>
int main()
{
    int n,digit;
    printf("enter a number:");
    scanf("%d",&n);
    digit=n%10;
    printf("last digit=%d",digit);
}
