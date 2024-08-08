import math
def countZ(d):
    zero=d.count('0')
    return zero
def countO(d):
    one=d.count('0')
    return one
def output(countZ,countO):
    if (countZ==1 or countO==1):
       print("Yes")
    else:
       print("No")
d=input("Enter only binary numbers : ")
countZero=countZ(d)
countOne=countO(d)
foutput=output(countZero,countOne)
