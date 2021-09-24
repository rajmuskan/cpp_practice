//FIND DUPLICATE IN AN ARRAY
//ATLEAST ONE ELEMENT SHOULD BE DUPLICATE
#include<bits/stdc++.h>
using namespace std;
int findduplicate(int *arr, int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                
                return arr[i];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findduplicate(arr,n)<<endl;
 
 return 0;
}