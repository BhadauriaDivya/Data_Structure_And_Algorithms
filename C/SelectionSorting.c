#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++){
          if (arr[j] < arr[min]){
            min= j;
          }
        }
           if(min!= i){
            swap(&arr[min], &arr[i]);
           }
    }
}

int main(){
    int arr[]={65,23,43,67,47,57,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}