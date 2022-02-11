#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,j,count=0;
    scanf("%d",&m);
    for(j=2;j<=sqrt(m);j++)
    {
        if(m%j==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("prime");
    }
    else if(count==1)
    {
        printf("not a prime");
    }
    return 0;
}