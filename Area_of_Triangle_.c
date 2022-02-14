#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,res,ans;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    res=s*(s-a)*(s-b)*(s-c);
    ans=sqrt(res);
    printf("%.2f",ans);
    return 0;
}