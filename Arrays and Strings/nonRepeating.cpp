/*
Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) time & constant extra space.

Example :
Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}
Output: 7 
*/
#include<iostream>
using namespace std;

int findSingleNum(int arr[], int arr_size){

    int res = arr[0];
    for (int i = 1; i < arr_size; i++)
        res = res ^ arr[i];
    return res;
}

int main(){
    int arr[] = {7, 8, 2, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findSingleNum(arr, n);

    return 0;
}