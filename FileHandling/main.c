#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open a file for writing in text mode
    file = fopen("myfile.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write "Hello World" to the file
    if (fprintf(file, "Hello World\n") < 0) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Open the file for reading in text mode
    file = fopen("myfile.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    
    // Read the string from the file
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read from file: %s", buffer);
    } else {
        perror("Error reading from file");
    }
    fclose(file);

    return 0;
}
