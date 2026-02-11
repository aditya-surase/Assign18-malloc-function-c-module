#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even: ");
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd: ");
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);

    free(arr);
    return 0;
}