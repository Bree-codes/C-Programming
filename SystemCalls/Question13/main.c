#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

// Define a constant for the buffer size
#define BUF_SIZE 100

int main() {
    // Open the file in read-only mode
    int fd = open("../input.txt", O_RDONLY);

    // Check if the file was opened successfully
    if (fd == -1) {
        perror("open");  // Print an error message if file opening fails
        return 1;        // Exit with error code 1
    }

    // Buffer Array to hold data read from the file
    char buffer[BUF_SIZE];

    // Variable to store the number of bytes read from the file
    ssize_t bytes_read;

    // Print a header indicating the start of file content output
    printf("File content:\n");

    // Read the file in chunks of BUF_SIZE - 1 bytes
    while ((bytes_read = read(fd, buffer, BUF_SIZE - 1)) > 0) {
        // Null-terminate the buffer to make it a valid C string
        buffer[bytes_read] = '\0';

        // Print the content of the buffer
        printf("%s", buffer);
    }

    // Check if the read operation failed
    if (bytes_read == -1) {
        perror("read");  // Print an error message if reading fails
        close(fd);       // Close the file descriptor
        return 1;        // Exit with error code 1
    }

    // Close the file descriptor
    close(fd);

    // Exit the program successfully
    return 0;
}
