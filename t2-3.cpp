#include <stdio.h>
int main()
{
    int y;
    printf("your born year:");
    scanf("%d", &y);
    if(y%4==0 && y%400!=0) {
        printf("Yes, leap year");
    } else {
        printf("NO, Not leap year");
    }
    return 0;
}
