// { Driver Code Starts
//You are given a string S that need 
//to be printed in a specific form. 
//Example: FORKJAVA will be printed as FAOVRAKJ.
/*Example:
Input:
1
Geeks
Output:
Gseke*/


#include <bits/stdc++.h>
using namespace std;
void patternPrint(queue <char>q);

 // } Driver Code Ends


//User function Template for C++

void patternPrint(queue <char>q)
{
    //Your code here
    deque <char> q1;
  
    // Push all the remaining 
    // elements in q1 to q2. 
    while (!q.empty()) { 
        q1.push_back(q.front()); 
        q.pop(); 
    }
    
    while (!q1.empty()) {
        if(!q1.empty()){
            cout<<q1.front(); 
            q1.pop_front();
        }
        if(!q1.empty()){
            cout<<q1.back(); 
            q1.pop_back();
        }
    }
    
    
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     string s;
	     cin>>s;//Taking string as input
		 queue<char>q;
		    for(int i=0;i<s.length();i++)
		    {
		        q.push(s[i]); //Putting s into a queue
		    }
		  
		    patternPrint(q); //passing queue to the function that you need to complete
		     cout<<endl;  //new line already added, don't add.
	}
	return 0;
}

  // } Driver Code Ends