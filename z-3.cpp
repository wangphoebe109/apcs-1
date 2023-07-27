#include <stdio.h>

int main()
{
    int M,D,S;
    scanf("%d",&M);
    scanf("%d",&D);
    S=(M*2+D)%3;
    if (S=0||S<1){
        printf("ordinary");
    }else if (S=1||S<2){
        printf("Little Kat");
    }else if (S=3||S<4){
        printf("good luck");
    }
    return 0;
}
