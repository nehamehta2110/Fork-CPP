#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};


bool Stack::push(int x){
    if (top >= MAX-1)
    {
        cout<<"Stack overflow"<<endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << "pushed into stack" << endl;
        return true;
    }
}

int Stack::pop(){
    if (Stack::isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        return false;
    }
    else
    {
        int x = a[--top];
        cout << x << "popped from stack" << endl;
        return true;
    }
}


int Stack::peek(){
    if (Stack::isEmpty())
    {
        cout<<"No peek"<<endl;
        return false;
    }
    else{
        return a[top];
    }

}

bool Stack::isEmpty(){
    return (top<0);
}

int main(){
    class Stack s;
    cout<<s.isEmpty();
    s.push(3);
    s.push(5);
    s.pop();
    cout<<s.peek();

    return 0;
}


