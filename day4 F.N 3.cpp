#include <stdio.h>

void findUnion(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    printf("Union of the two arrays: ");

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j++]);
        } else {
            // If both elements are equal, print one and move both pointers
            printf("%d ", arr1[i++]);
            j++;
        }
    }

    // Print remaining elements of the two arrays
    while (i < n) {
        printf("%d ", arr1[i++]);
    }

    while (j < m) {
        printf("%d ", arr2[j++]);
    }

    printf("\n");
}

int main() {
    int n, m;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter the elements of the first array (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int arr2[m];

    printf("Enter the elements of the second array (sorted): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    findUnion(arr1, n, arr2, m);

    return 0;
}

