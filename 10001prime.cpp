#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,j=1,k,num=0;
    while (num<10001)
    {
         i++;
        k=0;
        for (j = 1;j<=i;j++)
        {
            if(i%j==0) k++;  
        } 
        if(k==2) num++;
    }
    printf("%d",i);
}