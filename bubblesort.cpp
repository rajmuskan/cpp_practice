//bubble sort program
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *arr, int n){
    for(int j=0;j<n-1;j++){  //total n-1 rounds we have to consider.
        for(int i=0;i<n-1-j;i++){  //in each round there are n-1-j no. of swaps.
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
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

    bubblesort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
 return 0;
}