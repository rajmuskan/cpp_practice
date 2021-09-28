//two arrays should have atleast one element in common
#include<bits/stdc++.h>
using namespace std;
void arrayintersection(int *arr1, int *arr2, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[m];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[n];
    }
    cout<<arrayintersection(arr1,arr2,m,n);
    
 return 0;
}