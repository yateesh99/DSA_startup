#include<bits/stdc++.h>
using namespace std;

int firstocc(vector<int>& arr,int n, int k){
    int s = 0,e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1; 
        }
        else if (arr[mid] > k){
            e = mid - 1;
        }
        mid = s + (e -s)/2;
    }
    return ans;
}

int lastocc(vector<int>& arr, int n, int k){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < k){
            s = mid + 1; 
        }
        else if (arr[mid] > k){
            e = mid - 1;
        }
        mid = s + (e -s)/2;
    }
    return ans;
}

pair<int , int> firstandlastocc(vector<int>& arr, int n, int k){
    pair<int , int> p;
    p.first = firstocc(arr , n , k);
    p.second = lastocc(arr , n, k);
    
    return p;
}

int main(){
    vector<int> arr = {1,2,3,3,3,3,5};
    int n = arr.size();
    cout<<firstandlastocc(arr, n, 3).first<<" ";
    cout<<firstandlastocc(arr, n, 3).second;
    
    // int array[11] = {1,2,3,3,3,3,3,3,3,3,5};
    // cout<<"first occurence of 3 is at "<<firstocc(array, 11, 3)<<endl;
    // cout<<"last occurence of 3 is at "<<lastocc(array, 11, 3);
}
