// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void printTable(int n);

 // } Driver Code Ends


//User function Template for C++

void printTable(int n)
{
    int multiplier=10;
    while(multiplier)
    {
        cout<<multiplier * n<<" ";
        multiplier--;
    }
    
    cout<<endl;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    printTable(n);
	    
	}
	return 0;
}  // } Driver Code Ends