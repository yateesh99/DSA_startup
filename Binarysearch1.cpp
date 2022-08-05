#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int array[7];
        int key;
        cin>>key;
        for(int i=0;i<7;i++){
            cin>>array[i];
        }
        int start = 0;
        int end = 6;
        int mid = start + (end - start)/2;
        while(start <= end){
        if(array[mid] == key){
            cout<<mid;
            break;
        }
        else if(array[mid] < key){
            start = mid + 1;
        }
        else if(array[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        }
    }
}
