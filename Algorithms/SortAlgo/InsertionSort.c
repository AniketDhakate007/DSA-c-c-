//
// Created by adhak on 19-01-2024.
//
#include <stdio.h>
void InsertionSort(int arr[],int n){
    for (int i = 1; i < n ; i++) {
        for (int j = i-1; j >= 0; j--) {
            if(arr[j+1]<arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else {
                break;
            }
        }
    }
}
void main(){
    int arr[] ={2,4,3,1,6,5,};
    int n=6;
    InsertionSort(arr,6);
    printf("sorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d , ",arr[i]);
    }

}