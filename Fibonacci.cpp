#include <iostream>
using namespace std;
int main()
{
    int a[10000],i,j,k=2,sum=0;
    a[1]=1;
    a[2]=1;
    for(i=3;i<1000000;i++)
    {
        a[i]=a[i-1]+a[i-2];
        j=a[i];
        if(j%2==0) sum=sum+j;
        if(j>4000000) break;
    }
    printf("%d",sum); 
}


