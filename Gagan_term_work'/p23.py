""" Write a python program to Find the largest number among the three input numbers.

Name - 
Section - 
Roll no. - 
Branch - CSE """

a=int(input("enter the first number:"))
b=int(input("enter the second number:"))
c=int(input("enter the third number:"))
large=a
if b>large:
    large=b
if c>large:
    large=c
print("the largest number is:",large)

"""Output:
enter the first number:1
enter the second number:2
enter the third number:3
the largest number is: 3"""
