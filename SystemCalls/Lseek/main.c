#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 256  // Buffer size for reading lines

int main() {
    int fd = open("example.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;
    int lineCount = 0;

    // Read the file line by line
    while ((bytesRead = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytesRead] = '\0';  // Null-terminate the buffer

        // Process each character
        for (ssize_t i = 0; i < bytesRead; ++i) {
            if (buffer[i] == '\n') {
                lineCount++;
                if (lineCount == 4) {
                    // Print the 4th line
                    printf("4th Line: \n%s", buffer + i + 1); // Print the content after '\n'
                    close(fd);
                    return 0;
                }
            }
        }
    }

    if (bytesRead == -1) {
        perror("read");
    }

    printf("4th line not found or file is too short.\n");
    close(fd);
    return 1;
}
