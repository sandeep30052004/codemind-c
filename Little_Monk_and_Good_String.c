#include<stdio.h>
int main()
{
    char str[100000];
    int i,count=0,max=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(max<count)
        {
            max=count;
        }
    }
    printf("%d",max);
}