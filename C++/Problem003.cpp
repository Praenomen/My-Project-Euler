#include "stdafx.h"
#include <iostream>

bool isFactor(__int64 x, int y)     // Tests whether y is a factor of x
{
    __int64 dividend = x / y;      
    if (dividend * y == x)      // If there was no rounding after the division (and thus y is a factor of x), this is true 
    {
        return true;
    }
    else                        // Otherwise y is not a factor of x
    {
        return false;
    }
}

__int64 factorize(__int64 value, int factor)           // Takes factors out of value, if largest prime factor was taken, prints it
{
    bool run = true;                                   // True until i is found not a factor
    while (run == true)
    {
        if (isFactor(value, factor) == true)
        {
            value = value / factor;                      // Because we want prime factors, divide them out as we go
            if (value == 1)                             // If our last (largest) divisor divided it down to one, it is the largest prime factor
            {
                std::cout << factor << " is the answer";
            }
        }
        else                                            // Stops loop when no longer a factor
        {
            run = false;
        }
    }
    return value;                                      // Return (maybe) factored value
}

int main()
{
    __int64 bigNumber = 600851475143;                           // Our initial number
    for (int i = 3; i < 1000000; i = i + 2)                     // i + 2 because it is not even and will never be divisible by an even number
    {
        if (i <= bigNumber)                                     // Function stops when divisors are bigger than the divisee
        {
            bigNumber = factorize(bigNumber, i);      
        }
        
    }

    // Stops prompt from closing when "done"
    std::cin.clear();               // reset any error flags
    std::cin.ignore(32767, '\n');   // ignore any characters in the input buffer until we find an enter character
    std::cin.get();                 // get one more char from the user

    return 0;
}

