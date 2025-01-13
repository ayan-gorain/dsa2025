#include<bits/stdc++.h>
using namespace std;

void expalinstack(){
    stack<int> st;

    st.push(6);
    st.push(88);
    st.push(80);
    st.push(5);
    st.push(98);
    st.push(87);
    st.push(13);

    // cout<<st.top()<<" ";
    // st.pop();
    // cout<<st.top();

    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){
    expalinstack();

    return 0;
}