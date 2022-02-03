
#include<stdio.h>
int main()
{
	
	int num;
	int temp;
	scanf("%d",&num);
	int sum = 0;
	temp = num;
	while(temp!=0)
	{
		sum += temp % 10;
		temp = temp / 10;
	}
	int res = num % sum;
	if(res == 0)
		printf("True");
	else
		printf("False");
	return 0;
}