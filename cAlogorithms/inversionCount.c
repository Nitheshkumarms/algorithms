#include <stdio.h>

// Function to merge two subarrays and count inversions
int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k;
    int inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

// Function to count inversions using merge sort
int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;

        inv_count += mergeSortAndCount(arr, temp, left, mid);
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

        inv_count += mergeAndCount(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

// Function to count inversions in an array
int countInversions(int arr[], int n) {
    int temp[n];
    return mergeSortAndCount(arr, temp, 0, n - 1);
}

int main() {
    int playlist1[] = {3, 1, 2, 4, 6, 5, 8, 7};
    int playlist2[] = {1, 3, 2, 5, 4, 7, 6, 8};
    int playlist3[] = {2, 1, 4, 3, 6, 5, 8, 7};
    int n = sizeof(playlist1) / sizeof(playlist1[0]);

    int inv_count1 = countInversions(playlist1, n);
    int inv_count2 = countInversions(playlist2, n);
    int inv_count3 = countInversions(playlist3, n);

    printf("Number of inversions in user 1's playlist: %d\n", inv_count1);
    printf("Number of inversions in user 2's playlist: %d\n", inv_count2);
    printf("Number of inversions in user 3's playlist: %d\n", inv_count3);

    return 0;
}
