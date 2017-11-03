#The Collatz sequence
def collatz(n):
    m = n
    terms = 0
    while (m != 1):
        if (m % 2 == 0):
            m = m/2
            terms +=1
        else:
            m = 3*m + 1
            terms += 1
    return terms

maxterms = 0
maxval = 0
#Value must be above 500k because anything above has a double
#below 1 million - which has one more term in its sequence,
#by definition
for x in range (500000,1000000):
    if (collatz(x) > maxterms):
        maxterms = collatz(x)
        maxval = x

print (maxterms, "terms for", maxval)
