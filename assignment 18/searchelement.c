#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, found = 0;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    free(arr);
    return 0;
}