import math
product = 0
palin = [0,0,0,0,0,0]
nilap = [0,0,0,0,0,0]
biggest = 0
done = False
for i in range (325,1000):
    for j in range (i, 1000):
        product = i*j
        palin = [int(x) for x in str(product)]
        for k in range (0,6):
            nilap[k] = palin[5-k]
        for l in range (0,6):
            if (not done and palin[l] == nilap[l]):
                if (l == 5):
                    if (product > biggest):
                        biggest = product
                        print(biggest)
            else:
                done = True
        done = False
        product = 0
