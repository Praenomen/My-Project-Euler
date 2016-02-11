import math

#How many numbers get to a chain of 60
totalSum = 0
#Sum of factorials -- generates next number in chain
tempSum = 0
#Array of digits in previous number
digits = []
#Array of all numbers in current chain
currentChain = []
#Stops while loop if the chain has a repeat or reached 60
done = False

for x in range (1,1000000):
    #Divides the number into an array of its digits
    digits = list(str(x))
    done = False
    #Resets the chain to empty again
    currentChain = []
    while(done == False):
        #Summs the factorials
        for i in range (0, len(digits)):
            tempSum += math.factorial(int(digits[i]))
        #Adds this sum to the chain    
        currentChain.append(tempSum)
        #Sets digits back to the array of the digits of the last number in the chain
        digits = list(str(tempSum))
        #Resets the number being appended to zero
        tempSum = 0
        #If the chain loops (more than one of any number)
        if (len(currentChain) != len(set(currentChain))):
            done = True
        #If the chain succeeded (60 values)
        if (len(currentChain) == 60):
            totalSum += 1
            done = True
                            
print(totalSum, "Is the answer")
