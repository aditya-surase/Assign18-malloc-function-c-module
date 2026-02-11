#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0], max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    free(arr);
    return 0;
}