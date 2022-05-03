#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000],s;
    int i,c=0,d=0,v=0,w=0;
    scanf("%[^
]s",str);
    scanf("%c",&s);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U' || str[i]=='I')
        {
            v++;
        }
        else if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
        {
            d++;
        }
        else if(str[i]==' ')
        {
            w++;
        }
        else
        {
            c++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
}