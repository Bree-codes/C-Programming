#include <stdio.h>

int main(void) {
    printf("Hello Bree!\n");
    int a = 5,b = 10,c = 7;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d" ,&a,&b,&c);
    int result = a + b+ c;
    printf("The result is: %d\n",result);
    return 0;
}
