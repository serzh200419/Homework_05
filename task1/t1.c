#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int i = 0;
    int sum = 0;
    int *arr;

    printf("Enter the number of elements for array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integers: ", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array: %d\n", sum);

    free(arr);
    return 0;
}

