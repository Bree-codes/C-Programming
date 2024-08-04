#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

int main(int argc,char* argv[]) {
    int fd = open(argv[1],O_RDONLY);
    char buf[BUF_SIZE];

    if(fd != -1) {
        ssize_t fileRead = read(fd, buf, BUF_SIZE - 1);

        while (fileRead > 0) {
            buf[fileRead] = '0';
            printf("%s\n", buf);
            fileRead = read(fd, buf, BUF_SIZE - 1);
        }
    }
        else{
            printf("Error opening file\n");
            return -1;
        }

    return 0;
}
