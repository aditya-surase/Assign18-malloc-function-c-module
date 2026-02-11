#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements:\n");
    for(int i = 0; i < n; i += 2)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}