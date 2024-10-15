#include <stdio.h>

void findLargestSmallest(int arr[], int n, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i]; // Update largest if current element is greater
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i]; // Update smallest if current element is smaller
        }
    }
}

int main() {
    int n;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check for valid size
    if (n <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, smallest;
    findLargestSmallest(arr, n, &largest, &smallest);

    // Display the results
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
