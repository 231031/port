#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i <10000000000; i++)
    {
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
                continue;
            }
        else
        {
            j=i;
            if (600851475143%j==0 && j>k)
            {
                k=j;
            }
            
        }
    } 
    printf("%d",k);       
   
    
}