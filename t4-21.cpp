#include <stdio.h>
int addNumber(int h, int m);
int main()
{
    int a,b,min;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    min = addNumber(a,b);
    printf("min = %d",min);
    return 0;
}
    int addNumber(int h,int m){
    int result;
    result = h*60+m;
    return result;
}
