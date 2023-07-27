#include <iostream>
using namespace std;
int add(int a,int b){
    return a + b ;
}
int sub(int a,int b){
    return a - b ;
}
int multiply(int a,int b){
    return a * b ;
}
int divide(float a,int b){
    return a / b ;
}
void print(){
    printf("this hello function \n");
}
int main()
{
    int a = 2,b = 7;
    
    #if 0
    printf("%d + %d = %d \n",a,b,a+b);
    #else
    printf("%d + %d = %d \n ",a,b,add(a,b));
    printf("%d - %d = %d \n ",a,b,sub(a,b));
    printf("%d * %d = %d \n ",a,b,multiply(a,b));
    printf("%f / %f = %f \n ",a,b,divide(a,b));
    #endif
    print();
    return 0;
}
