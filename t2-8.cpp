#include <stdio.h>
int main()
{
    int y,f;
    printf("your born year:");
    scanf("%d",&y);
    printf("your friend born year:");
    scanf("%d",&f);
    if ( y<1 || f<1 ){
        printf("false!!!");
    }else if ( y>f ){
        printf("your are bigger");
    }else{
        printf("your friends are bigger");
    }
    return 0;
}
