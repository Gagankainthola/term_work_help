/*write a C program to input Name, roll no. and percentage of n students. Calculate average percentages of class and print the details of all students having percentage greater than or equal to average percentage.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include<stdio.h>
#include<string.h>
struct stu
{
    char Name[15];
    int Rn;
    float per;
}s1[100];
int main()
{
    int i,n;
    float avgper,sumper;
    printf("Enter no. of Students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Name:");
        fflush(stdin);
        gets(s1[i].Name);
        printf("Roll no. :");
        scanf("%d",&s1[i].Rn);
        printf("Enter percentage");
        scanf("%f",&s1[i].per);
    }
    for(i=0;i<n;i++)
    sumper=sumper+s1[i].per;
    avgper=(float)sumper/n; 
    printf("Student(s) with percentage greater than average: ");
    for(i=0;i<n;i++)
    { 
        if(avgper<=s1[i].per)
        {
            printf("Name:");
            puts(s1[i].Name);
            printf("Roll no. %d",s1[i].Rn);
        } 
    }
    return 0;
}

/*Output:
Enter no. of Students:3
Name:Kanchan
Roll no. :18
Enter percentage: 98

Name:Kanchana 
Roll no. :26
Enter percentage: 66

Name:Mahi
Roll no. :34
Enter percentage: 89

Student(s) with percentage greater than average:
Name:Kanchan
Roll no. 18*/
