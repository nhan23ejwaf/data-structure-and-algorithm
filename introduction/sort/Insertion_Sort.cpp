#include<bits/stdc++.h>

using namespace std;

void insertion(int a[],int n){
    for(int i =0 ; i<n;i++){
        int temp =a[i];
        int j =i;
        while(j>=0){
            if(temp<a[j-1]){
                a[j] = a[j-1];
                j--;
            }else{
                a[j] = temp;
                break;   
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
    insertion(a,n);
}
