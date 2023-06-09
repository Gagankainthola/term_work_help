/*write a C program to search an element in an array using pointer and function.

Name -
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
int searchElement(int *arr, int size, int element) 
{
    int *ptr;
    for (ptr = arr; ptr < arr + size; ptr++) 
    {
        if (*ptr == element) 
        {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int i, size, element;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &element);
    if (searchElement(arr, size, element)) 
    {
        printf("Element found in the array.");
    } else 
    {
        printf("Element not found in the array.");
    }
    return 0;
}

/*Output:
Enter the size of the array: 4
Enter the elements of the array: 46 89 76 32
Enter the element to search: 56
Element not found in the array. */
