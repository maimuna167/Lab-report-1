#include <stdio.h>
int main() {
    char str[100], pattern[50];
    int i, j, found = -1;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (pattern[j] != '\0' && str[i+j] == pattern[j]) {
            j++;
        }

        if (pattern[j] == '\0') {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Pattern found at index: %d", found);
    else
        printf("Pattern not found");

    return 0;
}
