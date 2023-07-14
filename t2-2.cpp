#include <stdio.h>
int main()
{
    float r,area,length,pi;
    pi=3.14;
    printf("r:");
    scanf("%f", &r);
    if (r<0){
        printf("false \ntry again");
    }
    else {
    area=r*r*pi;
    printf("area:%.2f\n", area);
    length=r*2*pi;
    printf("length:%.2f", length);
    }
    return 0;
}
