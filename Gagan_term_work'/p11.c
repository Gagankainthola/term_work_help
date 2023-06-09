/*write a C program to concatenate two strings using function.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
void mystrcat(char str1[50],char str2[50]); 
int main()
{
    char str1[50],str2[50];
    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    fflush(stdin);
    gets(str2);
    mystrcat(str1,str2);
    printf("New string is: "); 
    puts(str1);
    return 0;
}

void mystrcat(char str1[50],char str2[50]) 
{
    int i,l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<l2;i++)
    {
        str1[l1+i]=str2[i];
    }
    str1[l1+l2]='\0';
}

/*Output:
enter first string: Graphic
enter second string: Era
New string is: Deepanshu Kandpal */
