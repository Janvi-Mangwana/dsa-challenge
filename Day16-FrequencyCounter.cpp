// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1

// Time Complexity: O(n log n)
// Auxiliary Space: O(k), k-> number of distinct elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto it : mp){
        cout<<it.first<<":"<<it.second<<" ";
    }
    return 0;
}