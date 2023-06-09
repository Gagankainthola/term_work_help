/*write a C program to compare two strings using pointer and function.

Name - 
Section - 
Roll no. -
Branch - CSE */

#include<stdio.h>
#include<string.h>
int mystrcmp(char *,char *); 
int main()
{
    char str1[50],str2[50];
    int c;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    c=mystrcmp(str1,str2); 
    if(c==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal"); 
    return 0;
}

int mystrcmp(char *p1,char *p2) 
{
    int i=0;
    while (*p1!='\0' || *p2!='\0')
    {
        if(*p1>*p2)
            return 1;
        else if(*p1<*p2)
            return -1;
        p1++;
        p2++; 
    }
    return 0;
}

/*Output:
Enter first string: London
Enter second string: India
Strings are not equal */
