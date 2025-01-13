#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int,int> pr1={2,8};

    cout<<pr1.first<<endl;
    cout<<pr1.second; 
    cout<<endl;

    pair<int,int> pr2=make_pair(4,7);
    cout<<pr2.first<<endl;
    cout<<pr2.second;
    cout<<endl;

    pair<int,char> pr3=make_pair(6,'b');
    cout<<pr3.first<<endl;
    cout<<pr3.second<<endl;
    

    pair<pair<int,string>,char> pr4={{4,"ayan"},'l'};

    cout<<pr4.first.second<<endl;

}

int main(){
    explainpair();

    return 0;
}