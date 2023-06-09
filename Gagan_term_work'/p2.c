/*write the C program to print average of elements of array using pointer and function.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include<stdio.h>
float average(int *,int);
int main()
{
    int arr[50],i,n;
    int *p=arr;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    float avg=average(p,n);
    printf("Average of array : %.2f",avg);
    return 0;
}

float average(int *p,int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
{
    sum=sum+*(p++);
}
    avg=(float)sum/n;
    return avg;
}

/*output:
Enter size of array : 4
Enter elements of array : 
32
45
76
98
Average of array : 62.75 */
