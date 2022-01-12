//form Project Euler problem 10 The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.
//Ans 142913828922
#include <iostream>
using namespace std;
int main()
{
    long long sum = 0;
    int number = 1, j, factor = 0;
    while (number < 2000000)
    {
        factor = 0;
        number += 2;
        for (j = 1; j <= number; j++)
        {
            if (number % j == 0)    //หาจำนวนตัวประกอบ
                factor++;
        }
        if (number > 2000000)
            break;
        if (factor == 2)            //มีตัวประกอบ 2 ตัว แสดงว่าเป็นจำนวนเฉพาะ
        {
            printf("%d\n", number);
            sum += number;
        }
    }

    printf("%lld", sum + 2);
}