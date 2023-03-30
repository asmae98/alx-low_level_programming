#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = ", world!";
    
    printf("Before copying: %s\n", str1);
    _strncpy(str1, str2, 5);
    printf("After copying: %s\n", str1);
    
    return 0;
}
