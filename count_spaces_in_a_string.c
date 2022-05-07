#include<stdio.h>
int main()
{
    char str[10000];
    int i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
}