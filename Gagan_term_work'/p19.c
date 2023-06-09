/*write a C program that would assign values to the individual members and 
display the time in the following form: 16:40:51. Create functions insert() 
and display() for input and Output.

Name - 
Section -
Roll no. -
Branch - CSE */

#include<stdio.h>
#include<string.h>
struct time
{ 
    int hours;
    int minutes;
    int seconds;
};
struct time insert(struct time);
void display(struct time);
int main()
{
    struct time t1,t2;
    t2=insert(t1);
    display(t2);
    return 0;
}
struct time insert(struct time t)
{
    printf("Enter hours:" );
    scanf("%d",&t.hours);
    printf("Enter minutes:" );
    scanf("%d",&t.minutes);
    printf("Enter seconds:" );
    scanf("%d",&t.seconds);
    return t;
}

void display(struct time t)
{
    printf("Time: %d:%d:%d",t.hours,t.minutes,t.seconds);
}

/*Output:
Enter hours:8
Enter minutes:30
Enter seconds:45
Time: 8:30:45 */
