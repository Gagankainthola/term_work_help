/*write a C program to check characters of a string whether it is uppercase, lowercase, digit or special character.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
int main()
 {
    char str[50];
    int i=0;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
            printf("%c is a capital letter",str[i]);
        else if(str[i]>='a' && str[i]<='z')
            printf("\n%c is a small letter",str[i]);
        else if(str[i]>='0' && str[i]<='9')
            printf("\n%c is a Digit",str[i]);
        else 
            printf("\n%c is a Special symbol",str[i]);
        i++; 
    }
    return 0;
 }

/*Output:
Enter a string:12@Dee#P23 

1 is a Digit
2 is a Digit
@ is a Special symbolD is a capital letter
e is a small letter
e is a small letter
# is a Special symbolP is a capital letter
2 is a Digit
3 is a Digit */
