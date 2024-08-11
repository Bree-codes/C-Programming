#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <malloc.h>

int main(void) {
 /*   mode_t old_umask;

    // Step 1: Set umask to 0 and capture the old umask
    old_umask = umask(0);

    // Step 2: Reset the umask to its original value
    umask(old_umask);

    // Now you have the old umask value without changing it
    printf("Current umask is: %04o\n", old_umask);*/

    //malloc and realloc functions
    int *arr = (int*)malloc(5 * sizeof(int));

    //checking if memory allocation using malloc was successful
    if(arr == NULL){
        perror("Memory Allocation Failed");
        return 1;
    }
    //initialize and print values to the array
    for(int i = 0;i < 5;i++){
        arr[i] = i +1;
        printf("%d",arr[i]);
    }
    printf("\n");

    //Reallocating the memory using reallo()
    arr = (int*) realloc(arr,10* sizeof(int));
    if(arr == NULL){
        perror("Memory Reallocation Failed");
        return 1;
    }
    for(int i = 5;i < 10;i++){
        arr[i] = i+1;
    }
    for(int i = 0;i < 10;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
