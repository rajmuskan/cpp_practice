//Linear Search
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool found=false;
    for(int i=0;i<n; i++){
        if(arr[i]==k){
            cout<<i<<endl;
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"Not present in the array"<<endl;
    }
    
    return 0;
}