#credit to jasonbhill for most of this code, placing this 
#here because my code did not work for reasons unbeknownst to me
def num_divisors(n):
    # if n is divisible by 2
    if (n % 2 == 0):
        n = n/2
    divisors = 1
    count = 0
    while (n % 2 == 0):
        count += 1
        n = n/2
    divisors = divisors * (count + 1)
    #calculating any odd divisors
    p = 3
    while (n != 1):
        count = 0
        while n % p == 0:
            count += 1
            n = n/p
        divisors = divisors * (count + 1)
        p += 2
    return divisors

def find_triangular_index(factor_limit):
    n = 1
    lnum, rnum = num_divisors(n), num_divisors(n+1)
    while lnum * rnum < 500:
        n += 1
        lnum, rnum = rnum, num_divisors(n+1)
    return n

index = find_triangular_index(500)
triangle = (index * (index + 1)) / 2
print (triangle)
