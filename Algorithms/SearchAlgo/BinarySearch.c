
int BinarySearch(int arr[], int low, int high, int key);


//
// Created by adhak on 17-01-2024.
//

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


