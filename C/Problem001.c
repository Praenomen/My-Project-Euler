#include <stdio.h>
#include <stdlib.h>

/*
 * Returns the sum of the multiples of three and five, up to the number provided, or a default of 1000.
 */
int main (int argc, char* argv[]) 
{
    int max = 1000;
    if (argc > 1) {
        max = atoi(argv[1]);
    }
    int sum = 0;
    for (int i = 1; i < max; i++) {
        if (!(i % 3)) {
            sum += i;
        }
        else if (!(i % 5)) {
            sum += i;
        }
    }
    printf("%d is the sum\n", sum);
    return 0;
    
}