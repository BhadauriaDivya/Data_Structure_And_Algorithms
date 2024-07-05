#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[], int low, int high)
{
    int pivot=a[low];
    int left=low+1;
    int right=high;
    while(left<=right)
    {
        while(left<=right && a[left]<=pivot)
        {
            left++;
        }
        while(left<=right && a[right]>pivot)
        {
            right--;
        }
        if(left<right)
        {
            swap(&a[left], &a[right]);
        }
    }
    swap(&a[low],&a[right]);
    return right;
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main()
{
    int arr[]={23,4,45,26,76,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}