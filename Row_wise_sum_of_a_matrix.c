#include<stdio.h>
int main()
{
    int r,s,i,j,sum=0;
    scanf("%d%d",&r,&s);
    int arr[r][s];
    for(i=0;i<r;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<s;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
}