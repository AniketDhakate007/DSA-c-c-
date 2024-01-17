
int BinarySearch(int arr[], int low, int high, int key);
int LinearSearch(int arr[], int key);
#include <stdio.h>
//
// Created by adhak on 17-01-2024.
//
int main() {
    int arr[9] = {1, 3, 5, 12, 16, 21, 28, 29, 32};
    int key;
    printf("Enter key: ");
    scanf(" %d", &key);
//    int ans = LinearSearch(arr, key);
    int ans = BinarySearch(arr, 0, 8,key);
    if (ans == -1) {
        printf("element not found");
    } else{
        printf("Element found at: %d",ans);
    }
    return 0;
}
int BinarySearch(int arr[], int low, int high, int key){
    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }return -1;
}
//int LinearSearch(int arr[], int key) {
//    for (int i = 0; i < sizeof (arr)-1; i++) {
//        if(arr[i]==key)
//            return i;
//    }
//    return -1;
//}

