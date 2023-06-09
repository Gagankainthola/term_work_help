/*write a C program to compare two strings using function.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
int mystrcmp(char [],char []); 
int main() 
{
    char str1[50],str2[50];
    int c;
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    c=mystrcmp(str1,str2); 
    if(c==0)
        printf("Strings are equal.");
    else
        printf("Strings are not equal."); 
    return 0;
}

int mystrcmp(char str1[50],char str2[50]) 
{
    int i=0;
    while (str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]>str2[i])
            return 1;
        else if(str1[i]<str2[i])
            return -1;
        i++; 
    }
    return 0;
 }

/*Output:
Enter first string:india
Enter second string:london
Strings are not equal. */
