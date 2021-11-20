#include <iostream>
using namespace std;
int main()
{
    int i;
    int m,n,p,k,q,j=0;
    for(i=1;i<=100;i++)
    {
        k = m + i*i;
        m=k;
        j=p+i;
        p=j;
    }
    q=p*p;
    printf("%d",q-m);
}