/*write a C program to write characters to a file then read all characters from file and store all vowels, consonants, digits and special characters to 4 separate files.

Name -
Section - 
Roll no. - 
Branch - CSE */

#include <stdio.h>
#include <ctype.h>
int isVowel(char ch) 
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int isConsonant(char ch) 
{
    ch = tolower(ch);
    return (isalpha(ch) && !isVowel(ch));
}
int isDigit(char ch) 
{
    return (ch >= '0' && ch <= '9');
}

int isSpecialChar(char ch) 
{
    return (!isalpha(ch) && !isdigit(ch));
}

void categorizeCharacters(const char *filename, const char *vowelFilename, const char *consonantFilename,
                          const char *digitFilename, const char *specialCharFilename) 
{
    FILE *file = fopen(filename, "r");
    FILE *vowelFile = fopen(vowelFilename, "w");
    FILE *consonantFile = fopen(consonantFilename, "w");
    FILE *digitFile = fopen(digitFilename, "w");
    FILE *specialCharFile = fopen(specialCharFilename, "w");
    if (file == NULL || vowelFile == NULL || consonantFile == NULL || digitFile == NULL || specialCharFile == NULL) 
    {
        printf("Error opening files.\n");
        return;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) 
    {
        if (isVowel(ch)) 
        {
            fputc(ch, vowelFile);
        } else if (isConsonant(ch)) 
        {
            fputc(ch, consonantFile);
        } else if (isDigit(ch)) 
        {
            fputc(ch, digitFile);
        } else if (isSpecialChar(ch)) 
        {
            fputc(ch, specialCharFile);
        }
    }
    fclose(file);
    fclose(vowelFile);
    fclose(consonantFile);
    fclose(digitFile);
    fclose(specialCharFile);
    printf("Characters categorized and stored in separate files successfully.\n");
}

int main() 
{
    const char *filename = "characters.txt";
    const char *vowelFilename = "vowels.txt";
    const char *consonantFilename = "consonants.txt";
    const char *digitFilename = "digits.txt";
    const char *specialCharFilename = "special_chars.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    char ch;
    printf("Enter a series of characters (press Enter to finish):\n");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, file);
    }
    fclose(file);
    categorizeCharacters(filename, vowelFilename, consonantFilename, digitFilename, specialCharFilename);
    return 0;
}

/*Output:
Enter a series of characters (press Enter to finish):
Helloworld2323
Characters categorized and stored in separate files successfully. */
