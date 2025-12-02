#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 50

int main() {
    char str1[MAX_INPUT];
    char str2[MAX_INPUT];
    char *result_str = NULL;
    int len1, len2, total_len;

    printf("Enter the first string: ");
    scanf("%49s", str1); 

    printf("Enter the second string: ");
    scanf("%49s", str2); 

    len1 = strlen(str1);
    len2 = strlen(str2);
    total_len = len1 + len2 + 1; 

    result_str = (char *)malloc(total_len * sizeof(char));

    if (result_str == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    strcpy(result_str, str1); 
    strcat(result_str, str2); 

    
    printf("Concatenated Result: %s\n", result_str);

    free(result_str);
    result_str = NULL;

    return 0;
}