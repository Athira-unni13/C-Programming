#include <stdio.h>

int main() {
    char alphabet[26];
    char *ptr;
    int i;

    // Fill the array with alphabet letters
    for(i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    // Pointer to the beginning of the array
    ptr = alphabet;

    // Print all letters using pointer
    printf("Alphabet letters:\n");
    for(i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
