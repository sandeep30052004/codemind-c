#include<stdio.h>
int main()
{
	int num,i,m,count=0;
	scanf("%d",&num);//36
	for(i=1;i<num;i++)//
	{
		m=i*i;//1 4 9 16 25 36 
		if(m==num)//36==6
		{
		count=1;
		}
	}
	if(count==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}