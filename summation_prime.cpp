#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long sum=0;
    int i=1,j,k=0;
    while(i<1999999)
    {
        k=0;
        i +=2;
        for(j=1;j<=i;j++)
        {
            if(i%j==0) k++;
        }
        if(k==2) sum = sum + i;
        
        
    }
    
    printf("%d",sum+2);
}