#include <stdio.h>

void reverse_array(int* a, int n);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    printf("Before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    reverse_array(a, n);
    
    printf("After: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

