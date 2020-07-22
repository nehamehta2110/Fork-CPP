// { Driver Code Starts
//Initial Template for C++
/*
Given a number N. The task is to print word accordring to the directions given below:
1. If N is divisible by 3, print "Fork" (without quotes).
2. If N is divisible by 5, print "CPP" (without quotes).
3. If N is divisible by both 3 and 5, print "Fork CPP" (without quotes).|
4. If N ia neither divisible by 3 nor 5, print nothing.
*/

#include<bits/stdc++.h>
using namespace std;

// Function Prototype
void forkCPP();


 // } Driver Code Ends


//User function Template for C++

// Function to print ForkCPP
// N : input number
void forkCPP(int N){
    
    // Your code here
    
    if (N%3 == 0 and N%5==0)
        cout<<"Fork CPP"<<endl;
    else if (N%3 == 0)
        cout<<"Fork"<<endl;
    else if (N%5 == 0)
        cout<<"CPP"<<endl;
    else if (N%3 != 0 and N%5!=0)
        cout<<endl;
    
  
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
    
}  // } Driver Code Ends