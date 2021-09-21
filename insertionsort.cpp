//Insertion Sort Program
#include<iostream>
using namespace std;

void insertionsort(int *array, int n){
    for(int i=1;i<n;i++){
        int current = array[i];
		int j;
		for(j = i - 1; j >= 0; j--) {
			if(current < array[j]) {
				array[j+1] = array[j];
			}
			else {
				break;
			}
		}
		array[j+1] = current;
	}
}
int main(){
    int length;
    cin>>length;
    int array[length];
    for(int i=0; i<length;i++){
        cin>>array[i];
    }
    
    insertionsort(array,length);
    
    for(int i=0; i<length;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
