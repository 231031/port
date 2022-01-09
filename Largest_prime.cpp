//form Project Euler problem 3
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
//Ans 6857
#include <iostream>
using namespace std;
int main()
{
    int num = 0, j = 0, result = 0;
    for (num = 0; num < 10000; num++)
    {
        if ((num == 1 || num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) && (num != 2 && num != 3 && num != 5 && num != 7))
            continue;

        else
        {
            if (600851475143 % num == 0 && num > result)
                result = num;
        }
    }
    printf("%d", result);
}