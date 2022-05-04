#include<stdio.h>
#include<limits.h>
int mindigits(int *arr,int size)
{
    int count=0,i,min=INT_MIN,temp;
    for(i=0;i<size;i++)
    {
        count=0;
        temp=arr[i];
        if(temp==0)
        {
            count=1;
        }
        else
        {
            while(temp)
            {
                count++;
                temp/=10;
            }
        }
        if(count>min)
        {
            min=count;
        }
    }
    return min;
}
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i,m,count=0,flag=0,temp,min;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	m=mindigits(arr,size);
	for(i=0;i<size;i++)
    {
        count=0;
        temp=arr[i];
        if(temp==0)
        {
            count=1;
        }
        else
        {
            while(temp)
            {
                count++;
                temp/=10;
            }
        }
        if(m==count)
        {
        	flag++;
		}
	}
	printf("%d",flag);
}