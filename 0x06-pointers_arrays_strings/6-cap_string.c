#include <stdio.h>
#include <string.h>

char* cap_string(char* str);

int main() {
    char str[] = "hello, world! welcome to c programming.";
    
    printf("Before: %s\n", str);
    
    cap_string(str);
    
    printf("After: %s\n", str);
    
    return 0;
}
