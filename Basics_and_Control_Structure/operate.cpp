// { Driver Code Starts
/*Given three positive integers A, B and C. The task is to do the following operations one by one and print the results correspondingly.

Operation 1:  Print A raised to the power of B.  Let the power be P, i.e., P = POW(A, B).
Operation 2:  Print XOR of P with C.
Operation 3:  Print remainder of P when divided with C.*/

#include<bits/stdc++.h>
using namespace std;

// Function Prototype with arguments a, b and c
void operations(int a, int b, int c);


 // } Driver Code Ends


//User function Template for C++

/* Function to do the operations.
* Arguments : a, b and c
*/
void operations(int a, int b, int c){
    
    // Your code here
    long long int p = 0;
    p = pow(a, b);

    cout << p << endl;
    cout << (p ^ c) << endl;
    cout << (p % c) <<endl;
    
    
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int a, b, c;
        
        cin >> a >> b >> c;
        
        operations(a, b, c);
        
    }
    
}  // } Driver Code Ends