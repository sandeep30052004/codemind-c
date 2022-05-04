#include<stdio.h>
#include<limits.h>
int main()
{
    char str[10000];
    int i,count=0,min=99999,d=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
        if(min>count)
        {
            min=count;
        }
        count=0;
        d+=1;
        }
        count++;
    }
    if(d==0)
    {
        printf("%d",count);
    }
    else
    {
    printf("%d",min);
    }
}