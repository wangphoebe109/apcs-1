#include <iostream>

using namespace std;

int main()
{
    printf("enter 10 numbers: \n");
    int a[10],v,sum;
    for(int i=0;i<10;i++){
        
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        sum+=a[i];//sum=0+1..9
       
        
    }
    printf(" sum:%d \n",sum);
    v=sum/10;
    printf("average: %d \n",v);
    return 0;
}
