//form Project Euler problem 5
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//Ans 232792560
#include <iostream>
using namespace std;
int main()
{
    long int num;
    int factor;
    for (num = 1;; num++)
    {
        for (factor = 20; factor >= 1; factor--)
        {
            if (num % factor != 0)
                break;
        }
        if (factor == 1)
            break;
    }
    printf("%d", num);
}
