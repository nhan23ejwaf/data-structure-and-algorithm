#include<bits/stdc++.h>

using namespace std;

void selection(int a[],int n){
    for(int i =0 ;i < n;i++){
        int min = i;
        for(int j = i ;j<n;j++){
          if(a[min] > a[j]){
            min = j;
          }  
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp; 

    }


    for(int i =0 ; i<n;i++){
        cout<<a[i]<<" ";        
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n;i++){
        cin >> a[i];
    }
    selection(a,n);
    
}