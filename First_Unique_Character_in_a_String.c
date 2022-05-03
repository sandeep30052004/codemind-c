#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,count=0,j,flag=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        count=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d",i);
            break;
        }
        else
        {
            flag++;
        }
    }
    if(flag==strlen(str))
    {
        printf("-1");
    }
}