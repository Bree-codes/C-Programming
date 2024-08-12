#include <stdio.h>

int main(void) {
    FILE *file = fopen("file.txt","r");
    if(file == NULL){
        perror("Error Opening File:");
        return 1;
    }
    printf("File opened successfully!\n");

    fprintf(file,"Hello guys,welcome to our first class.\nI'm excited to have you all here.\n");

    printf("File successfully written to.\n");

    //reading from the file,we first place the file content in a buffer before displaying it to the user.
    char buffer[100];
    while (fgets(buffer,sizeof buffer,file)){
        printf("This is the file content..");
        printf("%s",buffer);
    }
    fclose(file);

    return 0;
}
