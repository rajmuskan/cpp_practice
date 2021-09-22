//Merge Sort Program (Recursive Algorithm) (Divide & Conquer Method)
#include<iostream>
using namespace std;
void merge_two_sorted_arrays(int *array,int si, int mid, int ei){
    int i=si;
    int j=mid+1;
    int new_array[ei+1]; //size=ei+1
    int k=0;
    while(i<=mid&&j<=ei){
        if(array[i]<=array[j]){
            new_array[k]=array[i];
            k++;
            i++;
        }else{
            new_array[k]=array[j];
            k++;
            j++;
        }
    }
    //don't initialise i here
    while(i<=mid){
        new_array[k]=array[i];
        k++;
        i++; 
    }
    //don't initialise j here
    while(j<=ei){
        new_array[k]=array[j];
            k++;
            j++;
    }
    
    k=0;
    for(int i=si;i<=ei;i++){
        array[i]=new_array[k];
        k++;
    }
    return;
}

void mergesort(int *array, int si, int ei){
    //base case:
    if(si>=ei){
        return; //array is already sorted.
    }
    
    int mid=(si+ei)/2;
    
    //recursive call on both splitted arrays:
    mergesort(array,si,mid);
    mergesort(array,mid+1,ei);
    
    //small calculation part:
    merge_two_sorted_arrays(array,si,mid,ei);
    return;
}
int main(){
    int length;
    cin>>length;
    int array[length];
    for(int i=0; i<length;i++){
        cin>>array[i];
    }
    
    int start_index=0, end_index=length-1;
    mergesort(array,start_index,end_index);
    
    for(int i=0; i<length;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}