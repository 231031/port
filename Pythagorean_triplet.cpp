#include <iostream>
using namespace std;
int main()
{
    int i,j,k,m;
    for(k=1;k<1000;k++)
    {
        for(j=1;j<k;j++)
        {
            for(i=1;i<j;i++)
            {
                if(((i*i)+(j*j)==(k*k)) && (i+j+k==1000)) break;
            }
            if(((i*i)+(j*j)==(k*k)) && (i+j+k==1000)) break;
        }
        if(((i*i)+(j*j)==(k*k)) && (i+j+k==1000)) break;
    }
    printf("%d",i*j*k);
}