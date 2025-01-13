
#include <bits/stdc++.h>
using namespace std;
void explainmap(){

    map<int,string> mpp;
    mpp[1]="abc";
    mpp[2]="bcd";
    mpp[3]="cat";
    mpp.insert({4,"Raj"});

    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
}

void explinmp(){
  multimap<int,char> mpp;
  mpp.insert({1,'a'});
  mpp.insert({1,'b'});
  mpp.insert({1,'c'});
  mpp.insert({2,'a'});
  mpp.insert({2,'b'});
  mpp.insert({2,'c'});
  mpp.insert({3,'a'});
  mpp.insert({3,'b'});
  mpp.insert({3,'c'});

for(auto it:mpp){
  cout<<it.first<<"->"<<it.second<<endl;
}
cout<<endl;
//to find out in a range
 auto it=mpp.equal_range(2);
 for(auto i=it.first;i!=it.second;i++){

  cout<<(*i).first<<"->"<<(*i).second<<endl;


 }
}
int main() {
explinmp();
  return 0;
}