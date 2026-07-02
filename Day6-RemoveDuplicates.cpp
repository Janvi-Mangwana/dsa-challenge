// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each element: 1, 2, 3
#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr, int n){
    int j = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    arr.erase(arr.begin() + j + 1, arr.end());
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicates(arr, n);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}