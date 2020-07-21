// { Driver Code Starts
/*There is a stone bridge connecting India to Srilanka. First stone starting from India is having 1 inscribed on it, and last stone is on Srilankan side. Each subsequent stone has two consecutive numbers on it except the last stone which may have one or two numbers inscribed on it depending on value of N.
Stones may be aligned as : 1, (2, 3), (4, 5), (6, 7)... N.

You are given a number N representing the last number on the last stone; and a number X. The task is to find the minimum number of jumps you need from either Indian side or Srilankan side to reach the stone that has X inscribed on it.
Note: Jumping on first stone will be counted as 0 jumps.*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void findJumps(int, int);


 // } Driver Code Ends


//User function Template for C++

// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int N, int X){
    
    // Your code here
    if (X%2==0)
        cout<< min((X-1)/2+1, (N-X)/2) << endl;
    else
    
        if (N%2 !=0)
            cout<< min((X-1)/2, (N-X)/2) << endl;
        else
            cout<< min((X-1)/2, (N-X)/2+1) << endl;
    
    
    

}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}  // } Driver Code Ends