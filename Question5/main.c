#include <stdio.h>

int main() {
    // Declare a file pointer and arrays to hold the filename and user input string
    FILE *fptr;
    char filename[100], str[100];

    // Prompt the user to enter the filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // Consume the newline character left by scanf

    // Open the file for writing
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        // If the file cannot be opened, print an error message using perror and exit
        perror("Error opening file for writing");
        return 1;
    }

    // Prompt the user to enter a string to write to the file
    printf("Enter a string to write to the file: ");
    fgets(str, 100, stdin); // Read the string input from the user

    // Write the string to the file
    fprintf(fptr, "%s", str);
    // Close the file after writing
    fclose(fptr);

    // Open the file for reading
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        // If the file cannot be opened, print an error message using perror and exit
        perror("Error opening file for reading");
        return 1;
    }

    // Print the content of the file
    printf("Content of the file:\n");
    // Read each line from the file and print it until the end of the file is reached
    while (fgets(str, 100, fptr) != NULL) {
        printf("%s", str);
    }

    // Close the file after reading
    fclose(fptr);
    return 0;
}
