#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    int *b = malloc(n * sizeof(int));
    int *c = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);
    return 0;
}