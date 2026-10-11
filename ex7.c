#include<stdio.h>
int main()
{
    int i,count,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            count++;

        }
        {
            sum=sum+i;
        }
    }
    printf("%d,%d",count,sum);
}
