
#include<stdio.h>
int main() {
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n + 1];
    for(i = 2; i <= n; i++)
        a[i] = 1;
    for(i = 2; i <= n; i++) {
        if(a[i] == 1) {
            printf("%d ", i);

            for(j = i * 2; j <= n; j = j + i)
                a[j] = 0;
        }
    }

    return 0;
}
