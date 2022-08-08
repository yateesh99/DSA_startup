#include <bits/stdc++.h>
using namespace std;

int findpeak(int arr[]){
    int s = 0; 
    int e = 8; 
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
int main() {
    int array[] = {1,4,5,9,10,12,8,6,3}; 
    cout<<findpeak(array);
}
