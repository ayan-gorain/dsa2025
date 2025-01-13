#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={6,2,1,7,0};

    int sum=7;

    cout<<accumulate(arr,arr+5,0);
    

  return 0;
}