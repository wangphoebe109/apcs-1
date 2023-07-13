#include <iostream>
using namespace std;
int main(){
    int i,j,t;
    for(i=9;i>0;i--){
        for(j=9;j>0;j--){
            t=j*i;
            printf("i=%d j=%d\n t=%d\n",i,j,j*i);
        }
    }
    return 0;
}
