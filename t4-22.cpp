#include <stdio.h>
int addHour(int h);
int addMin(int m);
int main()
{
    int a,hour, min;
    printf("enter a number:");
    scanf("%d",&a);
    hour = addHour(a);
    min = addMin(a);
    printf("time = %d hour %d mins",hour,min);
    return 0;
}
    int addHour(int h){
    int result;
    result = h/60;
    return result;
}
    int addMin(int m){
    int result;
    result = m%60;
    return result;
}
