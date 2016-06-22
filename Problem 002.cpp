#include "stdafx.h"
#include <iostream>

int fibSeq[32];                      // Creates an array for the Fbbonacci Sequence to be stored in
int sum = 0
;

void addSum(int x)                   // Adds terms to the sum as needed
{
    sum += x; 
}

void fibCreator()                    // Fills the array with the sequence
{
    // Defines first 2 terms
    fibSeq[0] = 1;                   
    fibSeq[1] = 2;

    // Defines next 30 recursively, all that this program requires
    for (int i = 2; i < 32; i++)
    {
        fibSeq[i] = fibSeq[i - 1] + fibSeq[i - 2];
    }
}

void testEven(int x)                 // Function to determine divisibility by 2
{
    int half = x / 2;                // Variable for 1/2 of a number
    if (half * 2 == x)                // Uses rounding errors to determine divisibility by 2
    {
        addSum(x);                   // If divisible, add to the total
    }
}

int main()
{
    // Create the sequence
    fibCreator();

    // Test the terms, if they are under 4 million
    for (int i = 0; i < 32; i++)
    {
        if (fibSeq[i] <= 4000000)
        {
            testEven(fibSeq[i]);
        }
    }

    // Print the answer
    std::cout << sum;

    // Stops prompt from closing when "done"
    std::cin.clear();               // reset any error flags
    std::cin.ignore(32767, '\n');   // ignore any characters in the input buffer until we find an enter character
    std::cin.get();                 // get one more char from the user

    return 0;
}

