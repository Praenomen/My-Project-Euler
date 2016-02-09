import math

#Sum of all doubly palindromic numbers
count = 0


numDecInt = 0
numDecStr = '0'
numBinStr = '0'

for x in range(0,1000000):
    numDecInt += 1
    numBinStr = bin(numDecInt)
    numBinStr = numBinStr.replace("0b","")
    numDecStr = str(numDecInt)
    if (int(numDecStr) == int(numDecStr [::-1]) and numBinStr == (numBinStr [::-1])):
        count += numDecInt

print(count)
