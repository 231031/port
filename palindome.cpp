//form Project Euler problem 4
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.
//Ans 906609
#include <iostream>
using namespace std;
int main()
{
    int k, reverse, m, n = 0;
    int i, j;
    for (i = 100; i < 1000; i++)
    {
        for (j = 100; j < 1000; j++)
        {
            k = i * j;
            while (k != 0)
            {
                reverse = reverse * 10 + (k % 10);
                k = k / 10;
            }
            if (reverse == i * j && reverse > m)
                m = reverse;
            reverse = 0;
        }
    }
    printf("%d", m);
}