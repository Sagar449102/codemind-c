#include<stdio.h>
int main()
{
    int n,i,s1=0,s2=1,sum;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=s1+s2;
        s1=s2;
        s2=sum;
        if(sum==n)
        break;
    }
    if(sum==n)
    {
        printf("True");
    }
    else if(sum!=n)
    {
        printf("False");
    }
}