with open("50Digits.txt") as file:
    values = []
    summation = 0
    for x in range(0,100):
        data = int(file.readline(50))
        values.append(data)
        file.readline(1)
    print (values)
    for x in range (0,100):
        summation += values[x]
    print (summation)
    #For the answer, just copy the first 10 digits of what is printed
