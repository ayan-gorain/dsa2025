#include<bits/stdc++.h>
using namespace std;

void explainquene(){
    queue<int>qu;

    qu.push(6);
    qu.push(99);
    qu.push(9);
    qu.push(76);
    qu.push(67);
    qu.push(44);
    while(qu.empty()==false){
        cout<<qu.front()<<" ";
        qu.pop();
    }


}
void expalinpq(){
    //stores the highest elelment in the top

    priority_queue<int> pq;

    pq.push(20);
    pq.push(50); 
    pq.push(10);
    pq.push(60);
    pq.push(40);
    pq.push(90);
    pq.push(30);
    pq.push(770);
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
        cout<<endl;
    }


}
int main(){
    expalinpq(); 




    return 0;
}