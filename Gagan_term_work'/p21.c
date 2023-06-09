/*write a C program to store integers to a file then read all integers from files and store all even numbers to even.dat file and odd numbers to odd.dat file.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
void storeIntegersToFile(const char *filename) 
{
    FILE *file = fopen(filename, "w");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return;
    }
    int num, i, count;
    printf("Enter the number of integers to store: ");
    scanf("%d", &count);
    printf("Enter the integers:\n");
    for (i = 0; i<count; i++) 
    {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
    printf("Integers stored to file successfully.\n");
}

void splitNumbers(const char *filename, const char *evenFilename, const char *oddFilename) 
{
    FILE *file = fopen(filename, "r");
    FILE *evenFile = fopen(evenFilename, "w");
    FILE *oddFile = fopen(oddFilename, "w");
    if (file == NULL || evenFile == NULL || oddFile == NULL) 
    {
        printf("Error opening files.\n");
        return;
    }
    int num;
    while (fscanf(file, "%d", &num) != EOF) 
    {
        if (num % 2 == 0) 
        {
            fprintf(evenFile, "%d\n", num);
        } else 
        {
            fprintf(oddFile, "%d\n", num);
        }
    }
    fclose(file);
    fclose(evenFile);
    fclose(oddFile);
    printf("Numbers split and stored in separate files successfully.\n");
}

int main() 
{
    const char *filename = "numbers.txt";
    const char *evenFilename = "even.dat";
    const char *oddFilename = "odd.dat";
    storeIntegersToFile(filename);
    printf("\n");
    splitNumbers(filename, evenFilename, oddFilename);
    return 0;
}

/*Output:
Enter the number of integers to store: 4
Enter the integers:
1
2
3
4
Integers stored to file successfully.
Numbers split and stored in separate files successfully. */
