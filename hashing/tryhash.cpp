#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
        int maxi = INT_MIN; // Use INT_MIN since we're working with int
;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
    unordered_map<int,int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;
    while(q--){
        int x;
        cin>>x;
        if(n>maxi){
            cout<<"0"<<endl;
        }
        else{
            hash[maxi];
        }
    }

    



    return 0;
}