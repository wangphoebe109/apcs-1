#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter another number:");
    scanf("%d",&y);
    printf("sum of two numbers:");
    scanf("%d",&z);
    if ( z==x+y ){
        printf("right");
    }else{
        printf("error");
    }
    return 0;
}
