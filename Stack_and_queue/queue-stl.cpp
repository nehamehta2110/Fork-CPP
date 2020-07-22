#include<bits/stdc++.h>
using namespace std;

void displayQueue(queue <int> q){
    while(!q.empty()){
        cout<< q.front()<<"\t";
        q.pop();
    }
    cout<<endl;
}

int main(){

    queue <int> q;
    q.push(13);
    q.push(2);
    q.push(4);
    cout<< "Here's the queue"<<endl;
    displayQueue(q);
    q.pop();
    displayQueue(q);
    cout<<"The front is "<<q.front()<<endl;
    cout<<"The rear is "<<q.front()<<endl;
    return 0;

}