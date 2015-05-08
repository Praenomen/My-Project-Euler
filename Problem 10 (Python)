# Maximum value of the prime
n = int(input("What number should I go up to? "))
# The prime
p = 2
# The sum of the primes so far
s = 0
for p in range(2, n+1):
    for i in range(2, p):
        if p % i == 0:
            break
    else:
        s = s+p
        print("Adding", p)
print ("Answer")
print (s)
print ("Done")
