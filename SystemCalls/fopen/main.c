#include <stdio.h>

int main() {

    FILE *fptr= fopen("test.txt", "r");
    if (!fptr ) {
        perror("Error opening file");
        return 1;
    }
    printf("File opened successfully!\nThis is the content of the file: ");

    char buffer[256]; // Buffer to hold the file content
    while (fgets(buffer, sizeof(buffer), fptr)) {
        printf("%s\n", buffer); // Print each line read from the file
    }

    fclose(fptr);
    return 0;

}
