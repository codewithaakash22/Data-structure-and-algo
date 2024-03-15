#include<stdio.h>
#include<stdlib.h>

void printArray(int * arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int *a, int low, int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    int temp;

    while (a[i]<=pivot)
    {
        i++;
    }

    while (a[j]>=pivot)
    {
        j++;
    }

    if(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return j;
}

void QuickSort(int *a, int low, int high){
        int partitionIndex;

        if(low<high){
            partitionIndex = partition(a,low,high);
            QuickSort(a,low,partitionIndex-1);
            QuickSort(a,partitionIndex+1,high);
        }
}

void main(){
            int A[] = {12,3,1,5,2,9};
            int x = 6;

            printf("Array Before Sorting\n");
            printArray(A,x);

            QuickSort(A,0,x-1);

            printf("Array After Sorting\n");
            printArray(A,x);

}