#include <iostream>
using namespace std;
int main()
{
    int a[10000],i,j,k=2;
    a[1]=1;
    a[2]=1;
    for(i=3;i<100000;i++)
    {
        a[i]=a[i-1]+a[i-2];
        j=a[i];
        if(j>10) break;
        printf("a[%d] = %d\n",i,j);
    }
    printf("%d",i);
}


