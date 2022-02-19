#include<stdio.h>
int main()
{
    int left,right,c=0,j,f=0,i;
    scanf("%d%d",&left,&right);
    for(i=left;i<=right;i++)
    {
        c=0;
        if(i==1)
        continue;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
               c=1;
               break;
            }
        }
        if(c==0)
        {
            f++;
        }
    }
    printf("%d",f);
    return 0;
}