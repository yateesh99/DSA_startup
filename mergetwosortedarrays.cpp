#include<bits/stdc++.h>
using namespace std;
void selsorted(int ar[], int n){
    
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
    int m;
    cin>>m;
    int n;
    cin>>n;
    int ar1[m];
    for(int i=0;i<m;i++){
        cin>>ar1[i];
    }
    int ar2[n];
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    int o = (m+n);
    int ar3[o];
    int i=0,j=0,k=0;
    while(i < m){
        if(ar1[i] == 0){
            i++;
        }
        ar3[k++] = ar1[i++];
    }
    while(j < n){
        if(ar2[j] == 0){
            j++;
        }
        ar3[k++] = ar2[j++];
    }

    selsorted(ar3,o);
     for(int i=0;i<o;i++){
            cout<<ar3[i];
        }
}
