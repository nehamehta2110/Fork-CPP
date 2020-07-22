#include<bits/stdc++.h>
using namespace std;

void displayQueue(priority_queue <int, vector<int>, greater<int>> q){
    while(!q.empty()){
        cout<< q.top() <<"\t";
        q.pop();
    }
    cout<<endl;
}

int main(){

    priority_queue <int, vector<int>, greater<int>> q;
    q.push(1);
    q.push(23);
    q.push(4);
    cout<< "Here's the queue"<<endl;
    displayQueue(q);
    q.pop();
    displayQueue(q);
    cout<<"The top is "<<q.top()<<endl;
    return 0;

}