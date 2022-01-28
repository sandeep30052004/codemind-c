#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	a=0;
	printf("%d ",a);
	b=1;
	printf("%d ",b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
        b=c;
	}
}