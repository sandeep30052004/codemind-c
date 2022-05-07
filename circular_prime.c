#include<stdio.h>
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
    if(count==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int reverse(int num)
{
    int rev=0;
    while(num)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    return rev;
}
int main()
{
    int num,rev;
    scanf("%d",&num);
    rev=reverse(num);
    if(prime(num)==1 && prime(rev))
    {
        printf("circular prime");
    }
    else if(prime(num)==1 && prime(rev)==0)
    {
        printf("prime but not a circular prime");
    }
    else if(prime(num)==0)
    {
        printf("not prime");
    }
}