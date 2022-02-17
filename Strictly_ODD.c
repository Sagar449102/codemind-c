#include<stdio.h>
int main()
{
    int x[20],n,f=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2!=0)
        {
            if(i%2==0)
            {
              f=1;
              break;
            }
        }
    }
    if(f==0)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}