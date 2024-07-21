#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], str[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    printf("Enter a string to write to the file: ");
    getchar(); // consume newline left by scan f
    fgets(str, 100, stdin);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    printf("Content of the file:\n");
    while (fgets(str, 100, fptr) != NULL) {
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
