#include<stdio.h>
int main()
{
    int n,i,j,min;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    
    min=x[0];
    for(i=0;i<n;i++)
    {
        if(x[0]<min)
        {
            min=x[i];
        }
    }
       for(i=0,j=min;i<n,j>=1;i++,j--)
        {
           if(j % x[i]==0)
           {
           printf("%d",j);
           }
        }
   return 0; 
}
