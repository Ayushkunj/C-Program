#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[20];
    int i=0,j,a,b;
    printf("Enter a string : ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(isalpha(str[i]))
        {
            i++;
            if(isdigit(str[i]) && isdigit(str[i+1])&& (isalpha(str[i+2])||(str[i+2]=='\0')))
            {
                a=(int)(str[i]-'0');
                b=(int)(str[i+1]-'0');
                for(j=0;j<((a*10)+b);j++)
                    printf("%c",str[i-1]);
                i++;
            }
            else if(isdigit(str[i]))
            {
                a=(int)(str[i]-'0');
                for(j=0;j<a;j++)
                    printf("%c",str[i-1]);
                i++;
            }
            else
            {
                printf("Invalid input");
                exit(0);
            }
        }
    }


    return 0;
}
