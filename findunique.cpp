//find unique element in an array
#include<bits/stdc++.h>
using namespace std;

int unique(int *arr,int n){
    for(int i=0;i<n; i++){
        bool found=false;
        for(int j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                //return arr[i];
                found=true;
                break;
            }
        }
        if(found==false){ 
                return arr[i];
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

    cout<<unique(arr,n)<<endl;
 
 return 0;
}