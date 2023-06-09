/*write a C program to sort the numbers in an array using pointer and function.

Name -
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
void sortArray(int *arr, int size) 
{
    int *ptr1, *ptr2, temp;
    for (ptr1 = arr; ptr1 < arr + size - 1; ptr1++) 
    {
        for (ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++) 
        {
            if (*ptr1 > *ptr2) 
            {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() 
{
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, size);
    printf("The sorted array is: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*Output:
Enter the size of the array: 5
Enter the elements of the array:
45
34
67
98
75
The sorted array is: 34 45 67 75 98 */

