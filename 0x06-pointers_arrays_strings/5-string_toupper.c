#include <stdio.h>
#include <string.h>

char* string_toupper(char* str);

int main() {
    char str[] = "Hello, World!";
    
    printf("Before: %s\n", str);
    
    string_toupper(str);
    
    printf("After: %s\n", str);
    
    return 0;
}
