#Requires removal of spaces and line breaks before use
with open("DataPairs.txt") as file:
    #array of 2-digit numbers
    values = []
    #maximum product
    maxmult = 0
    for x in range(0,400):
        #moves txt file to array
        data = int(file.readline(2))
        values.append(data)
    for z in range(0,400):
        #removes pesky errors
        values.append(0)
    for y in range(0,400):
        #the grindy bit
        mult1 = values[y]*values[y+1]*values[y+2]*values[y+3]
        if (mult1 > maxmult):
            maxmult = mult1
        mult2 = values[y]*values[y+20]*values[y+40]*values[y+60]
        if (mult2 > maxmult):
            maxmult = mult2
        mult3 = values[y]*values[y+21]*values[y+42]*values[y+63]
        if (mult3 > maxmult):
            maxmult = mult3
        mult4 = values[y]*values[y+19]*values[y+38]*values[y+57]
        if (mult4 > maxmult):
            maxmult = mult4
    #Hopefully, the answer :D
    print (maxmult)
