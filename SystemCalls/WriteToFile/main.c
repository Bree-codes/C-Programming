#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
 /*   int fd = open("file.txt", O_WRONLY| O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
    if (fd > -1){
        ssize_t bytesWritten = write(fd, "Hello all and welcome to my class.\n"
                                         "Today I'll be taking you through system calls in C Programming!\0\n", 98);
        if (bytesWritten == -1) {
            perror("write");
            close(fd);
            return 1;
        }
        close(fd);
        printf("Message was successfully written to your 'file.txt' file\nOpen it to confirm.\n");
    } else {
        perror("open");
        return 1;
    }

    return 0;*/


    int fd = open("output.txt",O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if(fd > -1){
        ssize_t  bytesWritten = write(fd,"Hello, World!\0\n",13);
        if(bytesWritten == -1){
            perror("write");
            close(fd);
            return 1;
        }
        close(fd);
        printf("Message written successfully.\n");
    }
    else{
        perror("open");
        return 1;
    }
    return 0;
}
