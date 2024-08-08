import math
n=4
marks=[]
print("Enter the marks of 4 subjects :")
for i in range(1,5):
    submarks=int(input(f"Subject {i} : "))
    marks.append(submarks)
print(marks)
tolmarks=sum(marks)/4
def gradesCal(tolmarks):
    if(91<tolmarks<100):
        grade="A"
    elif(81<tolmarks<90):
        grade="B"
    elif(71<tolmarks<80):
        grade="C"
    elif(61<tolmarks<70):
        grade="D"
    elif(51<tolmarks<60):
        grade="E"
    else :
        grade="F"
    return grade
Fgrade=gradesCal(tolmarks)
print(f"Grade is : {Fgrade}")