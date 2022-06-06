#include<stdio.h>
int searching(int *arr,int size,int se)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==se)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,c,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int size,c=0,k,sum;
        scanf("%d",&size);
        int arr[size],j,a;
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0;j<size;j++)
        {
            for(k=0;k<size;k++)
            {
                if(j!=k)
                {
                    sum=arr[j]+arr[k];
                    a=searching(arr,size,sum);
                    if(a)
                    {
                        c++;
                    }
                }
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
        else
        {
            printf("%d
",c/2);
        }
    }
}