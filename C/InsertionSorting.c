#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int arr[],int n){
    
}

int main(){
    int arr[]={23,43,16,54,23,14,5,64,48};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}