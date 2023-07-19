#include <stdio.h>
int main()
{
    int s;
    printf("Score is ");
    scanf("%d",&s);
    if ( s<0 || s>100 ){
        printf("false!!!");
    }else if ( s<60 ){
        printf("Grade E");
    }else if ( s>=60 && s<70 ){
        printf("Grade D");
    }else if ( s>=70 && s<80 ){
        printf("Grade C");
    }else if ( s>=80 && s<90 ){
        printf("Grade B");
    }else {
        printf("Grade A");
    }
    return 0;
}
