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

int main()
{
    /* WARNING -- DOES NOT ACCOUNT FOR DOUBLE FACTORS (Ex. if bigNumber is 49, it will never hit one (divide by 7, stuck at 7)) */    
    __int64 last = 1;                                           // The last divisor found
    __int64 bigNumber = 600851475143;                           // Our initial number
    for (int i = 3; i < 150000000000; i = i + 2)                // i + 2 because it is not even and will never be divisible by an even number
    {
        if (i <= bigNumber)                                     // Function stops when divisors are bigger than the divisee
        {
            if (isFactor(bigNumber, i) == true)
            {
                bigNumber = bigNumber / i;                      // Because we want prime factors, divide them out as we go
                last = i;
                    if (bigNumber == 1)                         // If our last (largest) divisor divided it down to one, it is the largest prime factor
                    {
                        std::cout << last << " is the answer";
                }
            }
        }
        
    }
        return 0;
}

