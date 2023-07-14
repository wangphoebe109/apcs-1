#include <stdio.h>
int main()
{
    float a, b, area;
    printf("A:");
    scanf("%f", &a);
    printf("B:");
    scanf("%f", &b);
    area=a*a+b*b+2*a*b;
    printf("(A+B)^2:%.2f", area);
    return 0;
}
