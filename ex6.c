#include<stdio.h>
int main()
{
    int n,digit,sum=0;
    for(n=456;n>0;n=n/10)
    {
        digit=n%10;
        sum=sum+digit;
    }
    printf("%d",sum);
}
