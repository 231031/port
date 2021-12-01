#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long sum = 0;
    int i = 1, j, k = 0;
    while (i < 2000000)
    {

        i = i + 2;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                k++;
        }
        if (i>2000000) break;
        if (k == 2)
        {  
            // printf("%d\n",i); 
            sum = sum + i;
        }
        k = 0;
    }

    printf("%d", sum + 2);
}