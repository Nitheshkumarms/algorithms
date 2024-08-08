import math
numbers=[]
n=len(numbers)
n1=int(input("Enter the no of elements : "))
print("Enter the elements :")
for i in range(n1):
    number=int(input())
    numbers.append(number)
def meanCal(numbers):
    return sum(numbers)/len(numbers)
def varCal(numbers,mean):
    return sum((x-mean)**2 for x in numbers)/2
def stddev(var):
    return math.sqrt(var)
mean=meanCal(numbers)
print(f"mean : {mean}")
var=varCal(numbers,mean)
print(f"variance : {var}")
stddeav=stddev(var)
print(f"standard deviation : {stddeav}")
