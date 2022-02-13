#include<stdio.h>
int main()
{
    int i,n,r,sum=0,p=0;
    scanf("%d",&n);
       if(n>=0)
    {
        p=0;
        while(n!=0)
        {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        }
    }
    else
    {
        while(n!=0)
        {
         r=n%10;
         sum=sum*10+r;
         n=n/10;
        }
    }
    if(p==0)
    {
        printf("%d",sum);
    }
    else
    {
        printf("-%d",sum);
    }
    return 0;
}