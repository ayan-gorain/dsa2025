#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void explainsort(){
  int arr[5]={6,2,1,7,8};

  sort(arr,arr+5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }


}
int main() {
  explainsort();

  return 0;
}