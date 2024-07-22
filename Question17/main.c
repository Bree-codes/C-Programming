#include <stdio.h>

int main() {
    // Declare a character array to store the filename
    char filename[100];
    // A character variable to store each character read from the file.
    char ch;
    // Declare a FILE pointer for file operations
    FILE *file;

    // Prompt the user to enter the filename
    printf("Enter the file name: ");
    // Read the filename from standard input and then it's stored in the filename array
    scanf("%s", filename);

    // Attempt to open the file in read mode
    file = fopen(filename, "r");
    // Check if the file was opened successfully
    if (file == NULL) {
        // If not, print an error message and exit with a return code of 1
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read and print the file contents character by character
    while ((ch = fgetc(file)) != EOF) {
        // Print each character to the standard output
        putchar(ch);
    }

    // Close the file after reading
    fclose(file);
    // Return 0 to indicate successful execution
    return 0;
}
