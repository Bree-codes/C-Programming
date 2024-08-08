#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
    // Child process
    printf("This is the child process.\n");
    }
    else {
    // Parent process
    printf("This is the parent process.\n");
    }

    return 0;
    }
