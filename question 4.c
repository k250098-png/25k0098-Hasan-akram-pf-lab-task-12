#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1 = NULL;
    int size = 5;
    
    arr1 = (int *)calloc(size, sizeof(int));
    
    if (arr1 == NULL) {
        perror("calloc failed");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        arr1[i] = (i + 1) * 10;
    }
    
    free(arr1);
    arr1 = NULL;

    arr1 = (int *)malloc(size * sizeof(int));

    if (arr1 == NULL) {
        perror("malloc failed on reuse");
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        arr1[i] = (i + 1) * 100;
    }
    

    free(arr1);
    arr1 = NULL;

    return 0;
}