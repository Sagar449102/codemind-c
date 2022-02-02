#include<stdio.h>
int main()
{

    int n, rem,pro=1, sum=0,tot_value;

    
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        sum += rem;
        pro*=rem;
        n /= 10;  
    }
    tot_value=pro-sum;
    printf("%d",tot_value);
    return 0;
}