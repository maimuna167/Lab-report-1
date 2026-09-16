#include <stdio.h>

int main() {
    char str1[50], str2[50], res[100];
    int pos, i, j, k;

    printf("Enter the original string: ");
    scanf("%s", str1);

    printf("Enter the new string: ");
    scanf("%s", str2);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = 0; i < pos - 1; i++) {
        res[i] = str1[i];
    }

    for(j = i, i = 0; str2[i] != '\0'; j++, i++) {
        res[j] = str2[i];
    }

    k = pos - 1;

    for(i = j; str1[k] != '\0'; i++, k++) {
        res[i] = str1[k];
    }

    res[i] = '\0';

    printf("After insertion: %s", res);

    return 0;
}
