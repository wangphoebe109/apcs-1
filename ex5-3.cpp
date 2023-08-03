#include <iostream>
using namespace std;
#define n 3
int main(){
    float a[n];
    int i;
    for(i-0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("a[%d] = %f \n",i,a[i]);
    }
    return 0;
}
