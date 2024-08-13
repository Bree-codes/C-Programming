#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int fd = open("foo.txt", O_CREAT|O_TRUNC|O_RDWR, 0644);
    if(fork() == 0) {
        dup2(fd, 1);
        execlp("echo", "echo", "hello world!", NULL);
    }
    wait(NULL);
    lseek(fd, -7, SEEK_CUR);
    write(fd, "planet!\n", 8);printf("Curr pos: %ld\n", lseek(fd, 0, SEEK_CUR));

}
