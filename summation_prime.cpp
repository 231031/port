#include <iostream>
using namespace std;
int main()
{
    unsigned long int i,j=1,k,sum;
    for(i=1;i<2000000;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0) k++;
        }
        if(k==2) sum = sum + i;
        
    }
    
    printf("%d",sum);
}