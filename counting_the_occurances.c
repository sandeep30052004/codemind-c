#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000],s;
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&s);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==s)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
}