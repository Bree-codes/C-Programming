#include <cstdio>
#include <cstring>

int main(){

    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    // Compare str1 and str2
    int result1 = strcmp(str1, str2);
    printf("Comparing '%s' and '%s': %d\n", str1, str2, result1);

    // Compare str1 and str3
    int result2 = strcmp(str1, str3);
    printf("Comparing '%s' and '%s': %d\n", str1, str3, result2);

    // Compare str2 and str3
    int result3 = strcmp(str2, str3);
    printf("Comparing '%s' and '%s': %d\n", str2, str3, result3);

    return 0;


}