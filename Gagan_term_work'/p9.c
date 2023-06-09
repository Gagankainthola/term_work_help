/*write a C program to reverse a string using function

Name - 
Section - G
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
void mystrrev(char str[50]); 
int main()
{ 
    char str[50];
    printf("Enter string:");
    gets(str);
    mystrrev(str); 
    printf("Reverse of entered string is:");
    puts(str);
    return 0;
}

void mystrrev(char str[50]) 
{
    char temp;
    int i,l,j;
    l=strlen(str);
    for(i=0,j=l-1;i<=j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

/*Ouitput:
Enter string: duck
Reverse of entered string is:kcud*/
