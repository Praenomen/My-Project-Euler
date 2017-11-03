import math
done = False
factors = [17,16,13,11,9,8,7,5,4,3,2]
nineteens = []
for x in range(1,47,368,422):
    nineteens.append(19*x)
print("Done the First")
for i in nineteens:
    done = False
    for j in factors:
        if(math.ceil(i/j) * j ==  i and done == False):
            if (j == 19):
                print(i)
        else:
            done = True
print("Done") 
