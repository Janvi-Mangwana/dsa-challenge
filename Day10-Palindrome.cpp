// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards

// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s){
    int left = 0, right = s.size()-1;
    while(left<right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    cout<<(isPalindrome(s) ? "YES":"NO");
    return 0;
}