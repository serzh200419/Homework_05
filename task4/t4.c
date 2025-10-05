#include <stdio.h>
#include <stdlib.h>

int main() {
    char **arr;
    int i;

    arr = (char**)malloc(3 * sizeof(char*));

    for (i = 0; i < 3; i++) {
        arr[i] = (char*)malloc(50 * sizeof(char));
        if (arr[i] == NULL) {
            printf("No memory\n");
            return 1;
        }
    }

    printf("Enter 3 strings: ");
    for (i = 0; i < 3; i++) {
        scanf("%49s", arr[i]);
    }

    arr = (char**)realloc(arr, 5 * sizeof(char*));

    for (i = 3; i < 5; i++) {
        arr[i] = (char*)malloc(50 * sizeof(char));
        if (arr[i] == NULL) {
            printf("No memory\n");
            return 1;
        }
    }

    printf("Enter 2 more strings: ");
    for (i = 3; i < 5; i++) {
        scanf("%49s", arr[i]);
    }

    printf("All strings: ");
    for (i = 0; i < 5; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
