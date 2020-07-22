#include <bits/stdc++.h>
using namespace std;

unsigned int countBits(int n){
    unsigned int count = 0;
    while (n)
    {
        n &= n-1;
        count++;

    }
    return count;

}


int main(){
    int n = 3;
    cout << countBits(n);
    return 0;
}