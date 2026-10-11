
#include<stdio.h>
int main ()
{
    int i=30;
   int sum=0;
    for(i=30;i<=100;i++)
    {
        if(i%3==0&&i%7==0)
        {
            sum=sum+i;
        }
    }printf("sum=%d",sum);
}
