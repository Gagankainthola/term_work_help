/*write a C program to copy a string using pointer and function.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
void stringCopy(char *dest, const char *src) 
{
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() 
{
    char source[100], destination[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", source);
    stringCopy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}

/*Output:
Enter a string: Graphic Era
Copied string: Graphic Era */

