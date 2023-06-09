/*write a C program to concatenate two strings using pointer and function.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
void stringConcatenate(char *str1,char *str2) 
{
    while (*str1 != '\0') 
    {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() 
{
    char str1[100], str2[50];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}

/*Output:
Enter the first string: Graphic 
Enter the second string: Era
Concatenated string: Graphic Era */
