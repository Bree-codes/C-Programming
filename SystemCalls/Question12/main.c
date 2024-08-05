#include <fcntl.h>  // Include the file control options header
#include <unistd.h> // Include the system call functions header
#include <stdio.h>  // Include the standard input/output header

int main() {
    // Open or create the file "output.txt" with write-only access and specified permissions
    int fd = open("output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

    // Check if the file was successfully opened
    if (fd == -1) {
        perror("open"); // Print an error message if opening the file failed
        return 1; // Return 1 to indicate an error
    }

    // Define the message to be written to the file
    const char *msg = "Hello, World!\n";

    // Write the message to the file
    if (write(fd, msg, 14) == -1) {
        perror("write"); // Print an error message if writing to the file failed
        close(fd);
        return 1; // Return 1 to indicate an error
    }

    close(fd); // Close the file to free system resources
    printf("Message written successfully.\n"); // Print a success message
    return 0; // Return 0 to indicate successful execution
}
