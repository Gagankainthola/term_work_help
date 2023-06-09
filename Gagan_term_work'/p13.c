/*write a C program to reverse strings using pointer and function.

Name - 
Section - G
Roll no. - 
Branch - CSE */

#include<stdio.h>
void reverse(int *,int);
int main()
{
    int arr[50],*ap,n,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ap+i);
    } 
    reverse(arr,n);
    printf("Thus formed array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",*(ap+i));
    }
}

void reverse(int *ap,int n)
{
    int temp,i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=*(ap+i);
        *(ap+i)=*(ap+j);
        *(ap+j)=temp;
    }
}

/*Output:
Enter no. of elements:7
Enter elements:google
Thus formed array is:elgoog */
