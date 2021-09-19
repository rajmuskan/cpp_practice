#include<iostream>
using namespace std;

void selectionsort(int *array, int n){
    //by which index element we need to swap is indicated by i & j indicates index of smallest element. 
    for(int i=0;i<n-1;i++){
        int min_element=array[i], min_ka_index=i;
        for(int j=i+1;j<n;j++){
            if(min_element>array[j]){
                min_element=array[j];
                min_ka_index=j;
            }
        }
        int temp=array[i];
        array[i]=array[min_ka_index];
        array[min_ka_index]=temp;
    }
}
int main(){
    int length;
    cin>>length;
    int array[length];
    for(int i=0; i<length;i++){
        cin>>array[i];
    }
    
    selectionsort(array,length);
    
    for(int i=0; i<length;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
