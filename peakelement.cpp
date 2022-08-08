#include <bits/stdc++.h>
using namespace std;

int findpeak(vector<int>& arr){
    int s = 0; 
    int e = arr.size()-1; 
    int mid = s + (e-s)/2; 
    while(s<e){ 
        if(arr[mid] < arr[mid+1])
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
    vector<int> array = {1,4,5,9,10,12,8,6,3}; 
    int p = findpeak(array);
    cout<<p;
}
