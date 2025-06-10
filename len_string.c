//Length of the string without using string functions

#include<stdio.h>

int main()
{
    char str[20];
    int i=0,len=0;
    printf("Enter the string: ");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length of the string is: %d",len);
    return 0;
}