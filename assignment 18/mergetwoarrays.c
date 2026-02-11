#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int *a = malloc(n1 * sizeof(int));
    int *b = malloc(n2 * sizeof(int));
    int *c = malloc((n1+n2) * sizeof(int));

    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n1; i++)
        c[i] = a[i];

    for(int i = 0; i < n2; i++)
        c[n1+i] = b[i];

    printf("Merged array:\n");
    for(int i = 0; i < n1+n2; i++)
        printf("%d ", c[i]);

    free(a);
    free(b);
    free(c);
    return 0;
}