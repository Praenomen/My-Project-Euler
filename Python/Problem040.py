import math

multiple = 1

irrationalLst = []
irrational = ''

for x in range (0,1000000):
    irrationalLst.append(x)
    irrationalLst[x] = str(irrationalLst[x])
    irrational += (irrationalLst[x])

multiple = multiple * int(irrational[1]) * int(irrational[10]) * int(irrational[100]) * int(irrational[1000]) * int(irrational[10000]) * int(irrational[100000]) * int(irrational[1000000])
print (multiple)
