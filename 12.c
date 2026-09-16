#include <stdio.h>
int main() {
    int a[5], i, search, found = 0;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++) {
        if(a[i] == search) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}
