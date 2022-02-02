#include<stdio.h>
int main()
{
    int l,b,w,c,area,tot_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);

        area=((l+2*w)*(b+2*w))-(l*b);
        tot_cost=area*c;
        printf("%d",tot_cost);
    
    return 0;
}