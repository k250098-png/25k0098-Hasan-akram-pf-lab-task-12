#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char *str = (char *)malloc(MAX_SIZE * sizeof(char));

    if (str == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    printf("Enter a line of text: \n");

    if (fgets(str, MAX_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        free(str);
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("\nOriginal String: \"%s\"\n", str);
    printf("Reversed String: \"");

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\"\n");

    free(str);
    str = NULL;

    return 0;
}