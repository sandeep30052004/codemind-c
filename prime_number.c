#include<stdio.h>
int main()
{
	int num,count=0,i;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)//3%==0
		{
			count=1;
		}
	}
	if(count==0)
		{
			printf("prime");
		}
	else
	{
		printf("not a prime");
	}
}