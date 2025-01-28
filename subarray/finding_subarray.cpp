#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,1,2,3,4,1,45,32};

    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;


    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                
            }
            maxi=max(maxi,sum);
            cout<<maxi<<" ";
        }
        cout<<endl;
    }
    cout<<maxi<<endl;
}