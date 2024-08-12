#include <stdio.h>

int main(void) {
    FILE *file = fopen("file.txt","r");
    if(file == NULL){
        perror("Error Opening File:");
        return 1;
    }
    printf("File Opened successfully!\n");

    //fprintf(file,"Hello guys,welcome to our first class.I'm excited to have you all here.\n");

    //printf("File successfully written to.\n");

    printf("This is the file content: ");
    //reading from the file,we first place the file content in a buffer before displaying it to the user.
    char buffer[100];
    while (fgets(buffer,sizeof buffer,file)){
        printf("%s",buffer);
    }
    fclose(file);

    return 0;
}
