#include <stdio.h>
int main() {
    char str[100];
    int pos, n, i;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    for(i = pos; str[i+n] != '\0'; i++) {
        str[i] = str[i+n];
    }

    str[i] = '\0';

    printf("After deletion: %s", str);

    return 0;
}


