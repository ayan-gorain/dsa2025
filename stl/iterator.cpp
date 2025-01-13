#include<bits/stdc++.h>
using namespace std;
void explainiterators(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(7);


    cout<<vec.size()<<endl;

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";

    }
    cout<<endl;

    //iterator
    vector<int>:: iterator beginItr=vec.begin();
    vector<int>:: iterator endItr=vec.end();

    for(vector<int>::iterator i=beginItr;i<endItr;i++){
        cout<< *i<<" ";
    }
    cout<<endl;

    //using auto
    auto  beginItrr=vec.begin();
    auto  endItrr=vec.end();

    for(auto i=beginItrr;i<endItrr;i++){
        cout<< *i<<" ";
    }
    cout<<endl;

    //we dont need to write everything

    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    //Reverse iterator
    auto revbeg=vec.rbegin();
    auto revend=vec.rend();
    for (auto i=revbeg; i < revend; i++)
    {
        cout<<*i<<" ";
    }
    
}

int main(){
    explainiterators();
    return 0;

}