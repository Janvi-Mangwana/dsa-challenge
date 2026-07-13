// Problem: Write a program to find the maximum and minimum values present in a given array of integers.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the maximum and minimum elements

// Example:
// Input:
// 6
// 3 5 1 9 2 8

// Output:
// Max: 9
// Min: 1

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int mn = x, mx = x;
    for(int i = 1; i<n; i++){
        cin>>x;
        mx = max(mx, x);
        mn = min(mn, x);
    } 
    cout<<"Max: "<<mx<<endl;
    cout<<"Min: "<<mn;
    return 0;
}