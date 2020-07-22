#include<bits/stdc++.h>
using namespace std;

unsigned int countSetBitsUtil(unsigned int x);

unsigned int countSetBitsUtil(unsigned int x){
    int count = 0;
    while (x)
    {
        x &= x-1;
        count++;
    }
    return count;
}
// Returns count of set bits present in all
// numbers from 1 to n
unsigned int countSetBits(unsigned int n)
{
    int bitCount = 0; // initialize the result
    for (int i = 1; i <= n; i++)
        bitCount += countSetBitsUtil(i);

    return bitCount;
}


int main(){
    int n = 3;
    cout<< countSetBits(n) << endl;
    return 0;
}