#include <stdio.h>

void findDuplicates(int arr[], int N) {
    int i, j;
    int found = 0;

    printf("Duplicate elements: ");

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, N);

    return 0;
}

