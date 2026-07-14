// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array

// Example:
// Input:
// 5
// 1 2 3 4 5
// 2

// Output:
// 4 5 1 2 3

// Time: O(n)
// Space: O(1)

#include<bits/stdc++.h>
using namespace std;

void rotate_array(vector<int> &v, int n, int k){
    int l = 0, r = n-1;
    k = k%n;
    // reverse(v.begin(), v.end())
    while(l<r){
        swap(v[l],v[r]);
        l++;
        r--;
    }
    l = 0;
    r = k-1;
    // reverse(v.begin(),v.begin()+k)
    while(l<r){
        swap(v[l],v[r]);
        l++;
        r--;
    }
    l = k;
    r = n-1;
    // reverse(v.begin()+k, v.end())
    while(l<r){
        swap(v[l],v[r]);
        l++;
        r--;
    } 
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    rotate_array(v, n, k);
    for(int val : v){
        cout<<val<<" ";
    }
    return 0;
}