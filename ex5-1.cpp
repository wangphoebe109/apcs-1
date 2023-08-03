#include <iostream>
using namespace std;
int f(int i){
    if(i <= 1){
        return 1;
    }
    return i * f(i-1);
}
/*
f(1) = 1
f(2) = 2 * f(1) = 2
f(3) = 3 * f(2) = 6
f(4) = 4 * f(3) = 24
f(5) = 5 * f(4) = 120

f(n) = n * f(n-1)
n! = n * (n-1) * (n-2) * ... * 1
*/
int main (){
    int n = 5;
    printf("f(%d) = %d \n",n,f(n));
    return 0;
}
