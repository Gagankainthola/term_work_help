"""write a python program to Find sum of digit of inputted number.

Name - 
Section -
Roll no. -
Branch - CSE """

num=int(input("enter the number:"))
sod=0
while num!=0:
    rem=num%10
    sod=sod+rem
    num=num//10
print("sum of digit:",sod)

"""Output:
enter the number:151
sum of digit: 7 """

