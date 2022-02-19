#include<stdio.h>
int main()
{
    int a[50],n,i,sum=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=1;
        for(j=1;j<=a[i];j++)
        {
        sum*=j;
        
    }
    printf("%d
",sum);
    }
    
    return 0;
}