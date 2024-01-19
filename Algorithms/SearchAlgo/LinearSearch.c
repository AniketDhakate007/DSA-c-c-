//
// Created by adhak on 19-01-2024.
//
#include <stdio.h>
int LinearSearch(int arr[], int key);

int main() {
    int arr[9] = {1, 3, 5, 12, 16, 21, 28, 29, 32};
    int key;
    printf("Enter key: ");
    scanf(" %d", &key);
    int ans = LinearSearch(arr, key);

    if (ans == -1) {
        printf("element not found");
    } else {
        printf("Element found at: %d", ans);
    }
}
int LinearSearch(int arr[], int key) {
    for (int i = 0; i < sizeof (arr)-1; i++) {
        if(arr[i]==key)
            return i;
    }
    return -1;
}