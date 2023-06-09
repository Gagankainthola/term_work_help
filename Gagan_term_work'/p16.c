/*write a C program to enter name, roll no., marks in 4 subjects of n students then calculate percentage for each student and print name and roll no. of student with highest percentage.

Name - 
Section -
Roll no. -
Branch - CSE */

#include<stdio.h>
int main()
{
    struct info
    {
        int rn ;
        char name[20];
        int marks[4];
        float per;
    };
    int total=0,n,i,j;
    float high;
    int index;
    struct info s[50];
    printf("enter the no. of student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no.:");
        scanf("%d",&s[i].rn);
        printf("enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("enter marks in 4 sub: ");
        for(j=0;j<4;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        total=0;
        for(j=0;j<4;j++)
        {
            total=total+s[i].marks[j];
        }
        s[i].per=(float)total/4;
    }
       high=s[0].per;
    index=0;
    for(i=1;i<n;i++)
    {
        if(s[i].per>high)
        {
            high=s[i].per;
            index=i;
        }
    }
    printf("highest percentage is %2f\n",high);
    printf("name of student is: ");
    puts(s[index].name);
    printf("roll no. of student is %d:",s[index].rn);
    return 0;
}

/*Output:
enter the no. of student: 4
enter roll no.:1
enter name: Rahul
enter marks in 4 sub: 78
89
56
92

enter roll no.:2
enter name: Deven 
enter marks in 4 sub: 75
67
87
89

enter roll no.:3
enter name: Anjan
enter marks in 4 sub: 89
98
98
92

enter roll no.:4
enter name: Krishna
enter marks in 4 sub: 56
65
65
87

highest percentage is 95.03
name of student is: Anjan
roll no. of student is: 3 */
