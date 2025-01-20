#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void funcc(int x,int N)
{
    if (N == 0)
        return;
    cout<<x++<<" ";
    funcc(x,N-1);    
}

int main() {

    int n;
    cin>>n;

    funcc(1,n);



  return 0;
}