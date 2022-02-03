#include<stdio.h>
int main()
{
    float n,i,res=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        res=res+(1/i);
    }
    printf("%.2f",res);
    return 0;
}