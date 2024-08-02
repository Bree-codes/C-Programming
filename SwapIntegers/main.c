#include <stdio.h>

//function for swapping 2 integers
void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

//main method
int main(void) {
     int x = 17,y = 10;

    printf("Before swapping: x = %d and y = %d\n",x,y);

    //calling swap method
    swap(&x,&y);

    printf("After swapping: x = %d and y = %d\n",x,y);

    return 0;
}
