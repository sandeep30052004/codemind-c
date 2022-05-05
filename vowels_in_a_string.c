#include<stdio.h>
int main()
{
    char str[10000],s;
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&s);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==s)
        {
            printf("True
");
            printf("%d",i);
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("False");
    }
}