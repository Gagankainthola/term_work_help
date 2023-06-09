/*write a C program to copy a string using function.

Name - 
Section - G
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
void mystrcpy(char str1[],char str2[]); 
int main()
{
    char str1[50],str2[50];
    printf("Enter string:");
    gets(str1);
    mystrcpy(str2,str1);
    printf("Copied String is:");
    puts(str2);
    return 1;
}

void mystrcpy(char str2[50],char str1[50]) 
{
    int s=0; 
    while(str1[s]!='\0') 
    {
        str2[s]=str1[s];
        s++; 
    }
    str2[s]='\0'; 
}

/*Output:
Enter string: sunday
Copied String is: sunday */
