//
// Created by adhak on 24-01-2024.
//
#include <stdio.h>
void SelectionSort(int arr[],int n){

    int i,j,minimum,temp;
    for (i=0;i<n-1;i++){
        //find minimum
         minimum=i;
        for (j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        if(i!=minimum) {
            temp = arr[i];
            arr[i] = arr[minimum];
            arr[minimum] = temp;
        }
    }
}


void main(){
    int arr[8]={1,4,6,3,7,2,10,12};
    int n=sizeof (arr)/sizeof (arr[0]);
    SelectionSort(arr,n);
    printf("sorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d , ",arr[i]);
    }
}