#include<bits/stdc++.h>
using namespace std;
void explainvectors(){
    vector<int> vec(5,8);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(7);


    // cout<<vec.size()<<endl;

    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";

    // }
    // cout<<endl;

    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    //swap

    vector<int> v1={4,6};
    vector<int> v2={7,9};

    swap(v1,v2);
    for(auto it:v1){
        cout<<it<<" ";
    }


    
}

int main(){
    explainvectors();
    return 0;

}