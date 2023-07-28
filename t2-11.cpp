#include <stdio.h>
int main()
{
    char text[10];//array 
    printf("enter text:");
    scanf("%s",text); //%s not need &
    printf("hello, %s",text);
    return 0;
}
