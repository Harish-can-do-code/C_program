//Upper caase to lower case without using string function

#include<stdio.h>

int main()
{
    char str[20];
    int i=0;
    printf("Enter the string: ");
    scanf("%20s",str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("%s",str);
}