#include "stdafx.h"
#include <iostream>

int sum = 0;                    // Sum of numbers determined to be divisible by 3 and/or 5 (End Goal)

void addSum(int x)               // Function to add values to the sum
{
    sum += x;
}

void fifthTest(int x)            // Function to determine divisibility by 5
{
    int fifth = x / 5;          // Variable for 1/5 of a number
    if (fifth * 5 == x)         // Uses rounding errors to determine divisibility by 5
    {
        addSum(x);              // If divisible, add to the total
    }
}

void thirdTest(int x)            // Function to determine divisibility by 3
{
    int third = x / 3;          // Variable for 1/3 of a number
    if (third * 3 == x)         // Uses rounding errors to determine divisibility by 3
    {
        addSum(x);              // If divisible, add to the total
    }
    else
    {
        fifthTest(x);
    }
}

int main()
{
    // Test vales 1 through 1000 for divisibility
    for (int i = 0; i < 1000; i++)
    {
        thirdTest(i);
    }

    // Print the answer
    std::cout << sum;
    
    // Stops prompt from closing when "done"
    std::cin.clear();               // reset any error flags
    std::cin.ignore(32767, '\n');   // ignore any characters in the input buffer until we find an enter character
    std::cin.get();                 // get one more char from the user

    return 0;
}
