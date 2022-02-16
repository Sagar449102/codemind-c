#include<stdio.h>
int main()
{
    int n,temp,t,r,rem,c=0,f=0;
    scanf("%d",&n);
    temp=n;
    t=n;
    while(temp!=0)
    {
        c=0;
        t=n;
        r=temp%10;
        while(t!=0)
        {
            rem=t%10;
            if(r==rem)
            {
                c++;
            }
          if(c>1)
        {
            f=1;
            break;
        }
            t=t/10;
        }
       
        temp=temp/10;
    }
    if(f==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    return 0;
}