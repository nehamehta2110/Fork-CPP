#include <bits/stdc++.h>

using namespace std;

void showcaseStack(stack <int> s){
    while(!s.empty()){
        cout<< s.top() <<"\t";
        s.pop();
    }
}

int main(){
    stack <int> s;
    s.push(3);
    s.push(7);
    s.push(46);
    showcaseStack(s);
    s.pop();
    cout<<s.top();
    showcaseStack(s);
    return 0;
}


