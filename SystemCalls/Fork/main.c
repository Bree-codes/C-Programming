#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork(); // Create a new process

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        return 1;
    }
    else if (pid == 0) {
        // This block is executed by the child process
        printf("I am the child process.My PID is %d.\n", getpid());
    }
    else {
        // This block is executed by the parent process
        printf("I am the parent process.My PID is %d and my child's PID is %d.\n", getpid(), pid);
    }

    return 0;
}
