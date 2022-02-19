#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,res,ans;
    scanf("%d%d%d",&x,&y,&z);
    res=pow(x,y);
    ans=res%z;
    printf("%d",ans);
    return 0;
}