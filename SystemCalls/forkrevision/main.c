#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int main(void) {
/*

    //forking
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
*/

    //this call sets the mask to 0 and returns the old mask before changing it to 0.
    mode_t old_umask = umask(0);
    printf("The original umask was: %04o\n", old_umask);
    printf("The umask is now set to 0: %04o\n", 0);

    //we reset the umask to the original mask before it was changed to 0.
    umask(old_umask);
    printf("The current mask is: %04o\n",old_umask);

    return 0;
}
