#include <iostream>
using namespace std;
int main()
{
    int i;
    int p,k,q=0;
    for(i=1;i<=100;i++)
    {
        k = k + i*i;
        p=p+i;
    }
    q=p*p;
    printf("%d",q-k);
}