#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if(pid < 0){
        perror("Fork Failed:");
        return 1;
    }
    else if(pid == 0){
        //child process
        printf("This is the child process:\n");
        printf("Process Id is:%d\n",getpid());
        printf("The parent process Id is:%d\n",getppid());
        printf("\n");
    }
    else{
        //parent process
        printf("This is the parent process:\n");
        printf("Process Id is:%d\n",getpid());
        printf("Child process Id:%d\n",pid);
        printf("\n");

        wait(NULL);
    }

    return 0;
}
