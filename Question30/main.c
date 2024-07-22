#include <stdio.h>

int main() {
    FILE *file; // Declare a file pointer
    char filename[100], ch; // Declare a character array for the filename and a character variable for reading the file
    int lines = 0; // Initialize a counter for the number of lines

    // Prompt the user to enter the filename
    printf("Enter the filename: ");
    scanf("%s", filename); // Read the filename from the user

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        // If the file could not be opened, print an error message and return 1
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read characters from the file until the end of the file (EOF) is reached
    while ((ch = fgetc(file)) != EOF) {
        // If the character read is a newline character, increment the line counter
        if (ch == '\n') lines++;
    }

    // Close the file
    fclose(file);

    // Print the number of lines in the file
    printf("Number of lines: %d\n", lines);

    return 0; // Return 0 to indicate successful completion
}
