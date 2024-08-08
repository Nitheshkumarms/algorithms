import math
frequency={}
def countnumbers(numbers):
    for digit in numbers:
        if digit.isdigit():
            if digit in frequency:
                frequency[digit]+=1
            else:
                frequency[digit]=1
    return frequency
numbers=input("Enter the Number : ")
frequency1=countnumbers(numbers)
print(frequency)
        