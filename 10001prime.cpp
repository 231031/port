//form Project Euler problem 7
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?
//Ans 104743
#include <iostream>
using namespace std;
int main()
{
    int num=0,j=1,factor,sequence_prime=0;
    while (sequence_prime<10001)
    {
        num++;
        factor=0;
        for (j = 1;j<=num;j++)
        {
            if(num%j==0) factor++;  
        } 
        if(factor==2) sequence_prime++;
    }
    printf("%d",num);
}