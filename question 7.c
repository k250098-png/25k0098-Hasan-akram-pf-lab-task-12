#include <stdio.h>
#include <string.h>


char tolowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}


int checkpalindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1; 
    }

    char charstart = tolowercase(str[start]);
    char charend = tolowercase(str[end]);

    if (charstart != charend) {
        return 0;
    }

    return checkpalindrome(str, start + 1, end - 1);
}


int ispalindrome(char *str) {
    int length = strlen(str);
    if (length == 0) {
        return 1;
    }
    return checkpalindrome(str, 0, length - 1);
}

int main() {
    char inputstring[100];
    int result;

    printf("Enter a string: ");
    scanf("%99s", inputstring); 

    result = ispalindrome(inputstring);

    printf("\nString: \"%s\"\n", inputstring);
    
    if (result == 1) {
        printf("Result: 1 (Palindrome)\n");
    } else {
        printf("Result: 0 (Not a Palindrome)\n");
    }

    return 0;
}