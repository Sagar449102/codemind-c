#include<stdio.h>
int rev(int a)
{
	int r,sum=0,temp=a;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum*10+r;
		temp=temp/10;
	}
	return sum;
}
int main()
{
	int x,y,i;
	scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
    	if(rev(i)==i)
    	printf("%d ",i);
	}
	
}