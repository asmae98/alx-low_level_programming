#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = ", world!";
    
    printf("Before concatenation: %s\n", str1);
    _strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    
    return 0;
}

