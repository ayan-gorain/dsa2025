#include<bits/stdc++.h>
using namespace std;
void explainlist(){
    list<int> ls={6,7};
    ls.push_front(177);
    for(auto i:ls){
        cout<<i<<" ";
    }

}
int main(){
    explainlist();
    return 0;
}