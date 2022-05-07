#include<stdio.h>
int add(int num)
{
    int sum=0,rem;
    while(num)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}
int main()
{
    int num,a;
    scanf("%d",&num);
    while(num)
    {
        a=add(num);
        if(a<=9)
        {
            printf("%d",a);
            break;
        }
        else
        {
            num=a;
        }
    }
}