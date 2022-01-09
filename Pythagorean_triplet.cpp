//form Project Euler problem9
//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,a^2 + b^2 = c^2
//For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
//Ans 31875000
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