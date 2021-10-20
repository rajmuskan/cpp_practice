#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    int n = str1.length();
    int k = str2.length();
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(str1[i]==str2[j]){
                count++;
                str2[j] = '0';
                break;
            }
        }
    }
    cout<<count;
 return 0;
}