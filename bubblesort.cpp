#include<bits/stdc++.h>
using namespace std;

void bubblesort(int ar[], int n){
    
        for(int i = 1;i<n;i++){
            
            for(int j = 0; j < n-i; j++){
                
            if(ar[j+1]<ar[j])
                swap(ar[j],ar[j+1]);
        }
    }
}    
int main(){
    int ar[6] = {6,11,9,22,56,44};
    int n = 6;
    
    selsort(ar,n);
     for(int i=0;i<n;i++){
            cout<<ar[i];
        }
}
