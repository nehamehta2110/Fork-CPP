#include<iostream>
#include<iomanip>
using namespace std;
      
int main()
{
    float c = 5.0;
    float far = (9/5)*c + 32;
    cout << fixed << "Temperature in Fahrenheit is "<< setprecision(2) << far;
    return 0;
} 