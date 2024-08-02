#include <stdio.h>
#include <stdlib.h>

// Function to allocate and initialize an array
int *allocate_and_initialize_array(int size) {
    // Dynamically allocate memory for an array of integers
    int *array = (int*)malloc(size * sizeof(int));

    // Check if the memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if allocation fails
    }

    // Initialize the array with values equal to their index
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    // Return the pointer to the allocated and initialized array
    return array;
}

int main() {
    int size = 5;

    // Call the function to allocate and initialize the array
    int *my_array = allocate_and_initialize_array(size);

    // Print the contents of the array
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, my_array[i]);
    }

    // Free the allocated memory
    free(my_array);

    return 0;
}
