#include <stdio.h>

int main()
{
    int a,c;
    printf("Enter a temperature in Celsius:");
    scanf("%d",&a);
    c=a*9/5+32;
    printf("%d degree F",c);
    return 0;
}
