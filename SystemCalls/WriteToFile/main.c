#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int fd = open("file.txt", O_WRONLY| O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);
    if (fd > -1){
        write(fd,"Hello all and welcome to my class.\n"
                 "Today I'll be taking you through system calls in C Programming!\0",98);
        close(fd);
    }
    else{
        printf("Error opening or creating file!");
    }

    printf("Message was successfully written to your 'file.txt' file\nOpen it to confirm..");
    return 0;
}
