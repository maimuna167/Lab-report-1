#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    int i, j;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i+j] != sub[j])
                break;
        }

        if(sub[j] == '\0') {
            printf("Starting position = %d", i);
            return 0;
        }
    }

    printf("Substring not found");

    return 0;
}
