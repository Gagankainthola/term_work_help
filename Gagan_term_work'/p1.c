/* Write a C program to find whether the inputted number is Armstrong or not using pointer and function.

Name - 
Section - 
Roll no. -  
Branch - CSE */

#include <stdio.h>
#include <math.h>
int armstrong(int *ptr);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = armstrong(&num);
    if (result)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}

int armstrong(int *ptr) 
{
    int num = *ptr;
    int temp = num;
    int i = 0;
    int sum = 0;
    while (num != 0) {
        num /= 10;
        i++;
    }
    num = temp;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, i);
        num /= 10;
    }
    return (sum == temp);
}

/*Output:
Enter a number: 153
153 is an Armstrong number */
