#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    scanf("%d",&n);
    while(sum!=1 && sum!=4)
    {
        sum=0;
    while(n!=0)
    {
        r=n%10;
        sum+=(r*r);
        n=n/10;
    }
     n=sum;
    }
    
    if(sum==1)
    printf("True");
    
    else if(sum!=1)
    printf("False");
    
    return 0;
}