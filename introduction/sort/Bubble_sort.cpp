#include<bits/stdc++.h>

using namespace std;

void Bubble(int a[],int n){
    for(int i =0 ; i<n;i++){
        for(int j =0 ; j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
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
    Bubble(a,n);


}