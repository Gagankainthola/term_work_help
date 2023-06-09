/*write a C program to write alphabets to a file then read all alphabets from 
file and store in another file by converting all alphabets to UPPERCASE.

Name - 
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
#include <ctype.h>
void convertToUpper(const char *filename, const char *outputFilename) 
{
    FILE *file = fopen(filename, "r");
    FILE *outputFile = fopen(outputFilename, "w");
    if (file == NULL || outputFile == NULL) 
    {
        printf("Error opening files.\n");
        return;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) 
    {
        if (isalpha(ch)) 
        {
            ch = toupper(ch);
        }
        fputc(ch, outputFile);
    }
    fclose(file);
    fclose(outputFile);
    printf("Alphabets converted to uppercase and stored in the output file successfully.\n");
}

int main() 
{
    const char *filename = "alphabets.txt";
    const char *outputFilename = "uppercase.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    char ch;
    printf("Enter a series of alphabets (press Enter to finish):\n");
    while ((ch = getchar()) != '\n') 
    {
        fputc(ch, file);
    }
    fclose(file);
    convertToUpper(filename, outputFilename);
    return 0;
}

/*Output:
Enter a series of alphabets (press Enter to finish):
london  
Alphabets converted to uppercase and stored in the output file successfully. */

