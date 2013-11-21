#include <iostream>
using namespace std;

unsigned long long divisors[1048575], i, number;
unsigned int number_of_divisors;

void checkIfPerfect()
{
    unsigned long long sum = 0;
    for (i = 0;  i < number_of_divisors;  i++)
    {
        sum += divisors[i];
        if (sum > number) return;
    }
    if (sum == number)
    {
        cout << number << " is a perfect number.\n";
    }
}

int main()
{
    number = 6;
    while (true)
    {
        number_of_divisors = 0;
        for (i = 1;  i <= number/2;  i++)
        {
            if (number % i == 0)
            {
                divisors[number_of_divisors] = i;
                number_of_divisors++;
            }
        }
        checkIfPerfect();
        if (number % 10 == 6) number += 2;
        else number += 8;
    }
}
