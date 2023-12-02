// code to sort an array using merge sort
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    // the two halves of the array are [0, mid] and [mid+1, e]
    int mid=s+(e-s)/2;
    
    int idx1=s;
    int idx2=mid+1;
    
    int *temp=new int[e-s+1];
    int i=0;
    while(idx1<=mid && idx2<=e){
        if(arr[idx1]<arr[idx2]){
            temp[i++]=arr[idx1++];
        }else{
            temp[i++]=arr[idx2++];
        }
    }
    
    while(idx1<=mid)    temp[i++]=arr[idx1++];
    while(idx2<=e)      temp[i++]=arr[idx2++];
    
    int k=s;
    for(int j=0;j<e-s+1;j++){
        arr[k++]=temp[j];
    }
}

void mergeSort(int *arr, int s, int e){
    // base case
    if(s==e){
        return;
    }
    
    // sort the two halves of the array
    int mid = s+(e-s)/2;
    mergeSort(arr, 0, mid);
    mergeSort(arr, mid+1, e);
    
    // merge the two halves
    merge(arr, s, e);
}

int main(){
    int arr[5]={3,5,1,6,4};
    mergeSort(arr, 0, 4);
    for(int i: arr) cout<<i<<" ";
    return 0;
}




/*
Summary:
1. base case is if array is of size one
2. otherwise, divide the array into two halves and sort them
3. merge the two sorted arrays

Steps to merge:
1. calculate the mid position in the array
the mid positon divides the array into two halves
2. use two pointers and an extra temporary array
keep inserting the elements in the sorted order and accordingly 
chk for any left elements if both the arrays are not equal in size
3. copy the contents from the temp array into the original array
copy at indexes from s to e in original array
*/
