#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int num=n,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    num=n;
    if(sum>num)
    printf("True");
    else
    printf("False");
    return 0;
}