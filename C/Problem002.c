#include <stdio.h>
#include <stdlib.h>

/*
 * Sum the even fibonacci numbers up to the number provided. Default 4,000,000.
 */
int main (int argc, char* argv[])
{
    int max = 4000000;
    if (argc > 1) {
        max = atoi(argv[1]);
    }
    int sum = 0;
    int last = 0;
    for (int i = 1; i < max; i += last) {
        last = i - last;
        if (!(i % 2)) {
            sum += i;
        }
    }
    printf("%d is the sum\n", sum);
    return 0;
}