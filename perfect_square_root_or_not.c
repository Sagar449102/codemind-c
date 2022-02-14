#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,ans;
    scanf("%d",&n);
    s=sqrt(n);
    ans=s*s;
    if(ans==n)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}