/*write a C program to accept records of employees. The structure is:

Struct emp
{
char name[20];
int age;
int basic;
}
Calculate total salary as-total salary=basic+hra+da
da=10% of basic     hra=5% of basic salary
Display age, total salary of employee in descending order on the basis of total salary.
Create separate function for input & display.

Name - 
Section - 
Roll no. - 
Branch - CSE */

struct emp
 { char name[20];
 int age;
 int basic;
 };
 
#include<stdio.h>
void input(struct emp []);
void display(struct emp []);
int main()
{
    struct emp s[2],temp;
    int i,j;
    input(s);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-1;j++)
        {
            if(s[j].basic<s[j+1].basic)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    display(s);
    return 0;
}

void input(struct emp s[2])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter Name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);
        printf("Enter Basic Salary : ");
        scanf("%d",&s[i].basic);
    }
}

void display(struct emp s[2])
{
    int i;
    float total,hra,da;
    for(i=0;i<2;i++)
    {
        printf("\nName : ");
        puts(s[i].name);
        printf("Age : %d\n",s[i].age);
        da=0.1*s[i].basic;
        hra=0.05*s[i].basic;
        total=s[i].basic+hra+da;
        printf("Total Salary : %2f",total);
        
    }
}

/*Output:
Enter Name : Gagan Kainthola
Enter age : 17
Enter Basic Salary : 5000
Enter Name : Devang Kandari
Enter age : 12 
Enter Basic Salary : 500

Name : Gagan Kainthola
Age : 17
Total Salary : 5750.000000
Name : Devang Kandari
Age : 12
Total Salary : 575.000000 */
