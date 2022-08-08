#include <bits/stdc++.h>
using namespace std;

int findpivot(int arr[] , int n){
    int s = 0; 
    int e = n-1; 
    int mid = s + (e-s)/2; 
    while(s<e){ 
        if(arr[mid] >= arr[0])
        { s = mid + 1; 
        } 
        else{ 
            e = mid; 
        } 
        mid = s + (e-s)/2; 
    } 
    return s;
} 

int binarysearch(int arr[], int start, int end, int k){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int findposition(int arr[], int n, int k){
    int pivot = findpivot(arr, n);
    if(k >= arr[pivot] && k < arr[n-1]){
        return binarysearch(arr, pivot , n-1 ,k);
    }else
    {
        return binarysearch(arr, 0, pivot-1, k);
    }
}

int main() {
    int array[] = {1,4,5,9,10,12,8,6,3}; 
    cout<<findposition(array, 9, 9);
}
