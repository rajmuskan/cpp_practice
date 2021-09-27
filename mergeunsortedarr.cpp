//merge two unsorted arrays:
#include<bits/stdc++.h>
using namespace std;
void merge_two_unsorted_array(int *arr1, int *arr2, int n1, int n2){
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    //now merge two sorted arrays.
    int n3=n1+n2;
    int temp[n3];
    int k=0;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            temp[k]=arr1[i];
            k++;
            i++;
        }else{
            temp[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        temp[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2){
        temp[k]=arr2[j];
        k++;
        j++;
    }

    for(int i=0;i<n3;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    merge_two_unsorted_array(arr1,arr2,n1,n2);

    
 return 0;
}