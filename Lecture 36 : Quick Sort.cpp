// Quick sort
#include<iostream>
using namespace std;

/*
    1. partition the array
    2. quicksort the left and the right half
*/


// function to partition the array
int partition(int arr[], int s, int e){
    
    // pivot element will be the first element
    int pivot=arr[s];
    
    int cnt=0;
    
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)  cnt++;
    }
    
    // place pivot index at right place
    int pivotIdx=s+cnt;
    swap(arr[s],arr[pivotIdx]);
    
    // sort the smaller and greater elements 
    int i=s, j=e;
    while(i<pivotIdx && j>pivotIdx){
        while(arr[i]<=pivot)    i++;
        while(arr[j]>pivot)    j--;
        if(i<pivotIdx && j>pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIdx;
}



// function to quicksort the array
void quicksort(int *arr, int s, int e){
    
    // base case : if array is of size 0 or 1, then it is sorted
    if(s>=e)    
        return;
    
    // get the partition index
    int idx = partition(arr, s, e);
    
    // sort the left half
    quicksort(arr, s, idx-1);
    
    // sort the right half
    quicksort(arr, idx+1, e);
}



// driver code
int main(){
    int arr[]={3,4,6,2,1,5};
    quicksort(arr, 0, 5);
    for(int i: arr)     cout<<i<<" ";
    return 0;
}
