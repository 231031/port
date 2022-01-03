#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long sum = 0;
    int i = 1, j, k = 0;
    while (i < 2000000)
    {
        k = 0;
        j = 1;
        i = i + 2;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                k++;
        }
        if (i>2000000) break;
        if (k == 2)
        {  
            printf("%d\n",i); 
            sum +=i;
        }
        
    }

    printf("%lld", sum + 2);
}