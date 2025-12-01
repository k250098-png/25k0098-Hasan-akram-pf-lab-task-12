#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *array = malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value of index %d: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Value at index %d is %d\n", i, array[i]);
    }

    free(array);
    
    return 0;
}
