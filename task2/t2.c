#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    float avg = 0;
    float sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));

    printf("Array after calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    avg = sum / n;
    printf("Average of the array: %.2f\n", avg);

    free(arr);
    return 0;
}
