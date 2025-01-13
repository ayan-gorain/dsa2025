#include<bits/stdc++.h>
using namespace std;

void expalinset(){
    set<int> st;

    st.insert(2);
    st.insert(2);
    st.insert(12);
    st.insert(12);
    st.insert(123);
    st.insert(211);
    st.insert(211);

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;


    // auto it=st.find(12);
    // if(it !=st.end()){
    //     cout<<*it;
    // }

    //cout<<st.count(12);

    //i waant to delete in a range

    // auto it1=st.begin();
    // it1++;
    // auto it2=st.end();
    // it2--;

    // st.erase(it1,it2);

    // for(auto it:st){
    //     cout<<it<<" ";
    // }
    //lower_bound returns an iterator that points to an element ths is >= the number given

    auto it=st.lower_bound(12);
    cout<<*it;
    cout<<endl;
//upper_bound returns an iterator that points to an element ths is > the number given

    auto itt=st.upper_bound(12);
    cout<<*itt;


}
void edxplainMultiset(){ 
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(21);
    ms.insert(21);
    for(auto it:ms){
        cout<<it<<" ";
    }
}
int main(){
    edxplainMultiset();

    return 0;
}