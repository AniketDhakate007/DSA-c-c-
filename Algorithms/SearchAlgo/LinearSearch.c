//
// Created by adhak on 19-01-2024.
//

int LinearSearch(int arr[], int key) {
    for (int i = 0; i < sizeof (arr)-1; i++) {
        if(arr[i]==key)
            return i;
    }
    return -1;
}