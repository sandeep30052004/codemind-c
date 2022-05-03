#include<stdio.h>
int main()
{
    int count=0,i;
    char str[100000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}