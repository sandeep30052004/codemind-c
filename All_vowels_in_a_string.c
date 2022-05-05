#include<stdio.h>
int main()
{
    char str[10000];
    int j,count=0,a=0,e=0,i=0,o=0,u=0,A=0,E=0,I=0,O=0,U=0;
    scanf("%[^n]s",str);
    for(j=0;str[j]!=NULL;j++)
    {
        if(str[j]=='a')
        {
            a++;
           
        }
        if(str[j]=='e')
        {
            e++;
           
        }
        if(str[j]=='i')
        {
            i++;
            
        }
        if(str[j]=='o')
        {
            o++;
            
        }
        if(str[j]=='u')
        {
            u++;
            
        }
        if(str[j]=='A')
        {
            A++;
          
        }
        if(str[j]=='E')
        {
            E++;
            
        }
        if(str[j]=='I')
        {
            I++;
            
        }
        if(str[j]=='O')
        {
            O++;
            
        }
        if(str[j]=='U')
        {
            U++;
        }
    }
    if(a>0&&e>=0&&i>0&&o>0&&u>0)
    {
    	printf("True");
	}
	else if(A>0&&E>0&&I>0&&O>0&&U>0)
	{
		printf("True");
	}
	else
	{
	    printf("False");
	}
}