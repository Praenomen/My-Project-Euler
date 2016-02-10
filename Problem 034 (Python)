import math

totalSum = 0
tempSum = 0
digits = []

for x in range (3,1000000):
    digits = list(str(x))
    for i in range (0, len(digits)):
        tempSum += math.factorial(int(digits[i]))
    if (tempSum == x):
        totalSum += x
    tempSum = 0
print(totalSum)
