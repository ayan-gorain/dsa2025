#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int n = arr.size();

     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==0){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                    }
                }
            }
        }

     }

  return 0;
}