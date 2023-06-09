"""write a python program to Find sum of following series 1-3+5-7 upto n terms.

Name - 
Section = 
Roll no. -=
Branch - CSE """

n = int(input("Enter the value of n: "))
sum = 0
sign = 1
for i in range(1, (2*n+1), 2):
    sum += sign * i
    sign *= -1
print("Sum of the series:", sum)

"""Output:
Enter the value of n: 6
Sum of the series: -6"""

