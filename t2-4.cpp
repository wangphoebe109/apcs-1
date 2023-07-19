#include <stdio.h>
int main()
{
    int y,m;
    printf("your born year and month: \n");
    scanf("%d", &y );
    scanf("%d", &m);
    //if ( m<1 || m>12){
    if( y<1 ){
        printf("false!!!");
    }else if( m<1 || m>12 ){
        printf("false!!!");
    }else if ( m<12 && m>7 && m%2==0 || m<8 && m>1 && m%2==1){
        printf("There are 31 days in this month.");
    } else if (y%4==0 && y%400!=0 && m==2 ){
        printf("There are 29 days in this month.");
    } else if (m==2){
        printf("There are 28 days in this month.");
    }
    else {
        printf("There are 30 days in this month.");
    }
    /*
    else if ( m>8 && m%2==0){
        printf("There are 30 days in this month.");
    }
    if(y%4==0 && y%400!=0) {
        printf("Yes, leap year");
    } else {
        printf("NO, Not leap year");
    }*/
    return 0;
}
