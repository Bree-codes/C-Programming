#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    // Open or create a file named "newfile.txt" with write-only access and read and write permissions for the owner.
    int fd = open("newfile.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);

    // Check if the file was successfully opened/created
    if (fd == -1) {
        // Print an error message if the file could not be opened/created
        perror("open");
        // Return 1 to indicate an error
        return 1;
    }

    // Close the file using the file descriptor
    close(fd);

    // Print a success message
    printf("File created successfully.\n");

    // Return 0 to indicate successful execution
    return 0;
}
