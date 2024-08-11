#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void) {
    mode_t old_umask;

    // Step 1: Set umask to 0 and capture the old umask
    old_umask = umask(0);

    // Step 2: Reset the umask to its original value
    umask(old_umask);

    // Now you have the old umask value without changing it
    printf("Current umask is: %04o\n", old_umask);

    return 0;
}
