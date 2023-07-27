#include <stdio.h>
int addNum(int w, int h);
int main()
{
    int a,b,area;
    printf("enter two numer:");
    scanf("%d %d",&a,&b);
    area = addNum(a,b);
    printf("area = %d",area);
    return 0;
}
int addNum(int w,int h){
    int result;
    result = w*h;
    return result;
}
