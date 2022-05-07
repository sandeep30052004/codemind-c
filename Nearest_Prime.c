#include<stdio.h>
#include<limits.h>
int prime(int num)
{
    int i,count=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size,a=INT_MAX,d2,m2,f,k,b=INT_MIN;
    scanf("%d",&size);
    int arr[size],i,j,c,m1,d1,temp;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        temp=arr[i];
        for(j=temp;j<a;j++)
        {
            if(prime(j)==1)
            {
                c=1;
                m1=j;
                break;
            }
        }
        for(k=temp;k>=1;k--)
        {
            if(prime(k)==1)
            {
                f=1;
                m2=k;
                break;
            }
        }
        if(c==1)
        {
            d1=m1-arr[i];
        }
        if(f==1)
        {
            d2=arr[i]-m2;
        }
        if(d1<d2)
        {
            printf("%d
",m1);
        }
        else if(d2<d1)
        {
            printf("%d
",m2);
        }
        else if(d1==d2)
        {
            if(m1>m2)
            {
            	printf("%d
",m2);
			}
			else
			{
				printf("%d
",m1);
			}
        }
    }
}