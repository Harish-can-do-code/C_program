#include<stdio.h>

int main()
{
    int a,b, add;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    add= a-~b-1;
    printf("The sum of a and b is: %d",add);
    return 0;
}