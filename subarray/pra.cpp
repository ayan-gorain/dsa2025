#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string name="Ayan gorain";
   int sum=0;

    for(int i=0;i<name.length();i++){
        char ch=name[i];
        if(isalpha(ch)){
            ch=tolower(ch);
        }
        int ascii=ch;
        sum+=ascii;
        cout<<sum<<endl;
    }
        
    

  return 0;
}
