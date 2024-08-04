#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    int id = fork();
    printf("Hello from ID: %d\n",id);
    printf("Current Process ID: %d\n",getpid());
    printf("Parent Process ID: %d\n",getppid());

    return 0;
}
