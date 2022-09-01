#include<bits/stdc++.h>
using namespace std;
void selsort(int ar[], int n){
    
        for(int i = 0;i<n-1;i++){
            
            int mindex = i;
            
            for(int j = i+1; j < n; j++){
                
            if(ar[j]<ar[mindex])
                mindex = j;
        }
        swap(ar[i],ar[mindex]);
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
