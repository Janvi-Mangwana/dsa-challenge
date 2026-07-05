// Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

// Input:
// - Single line: a lowercase string containing only alphabetic characters (no spaces)

// Output:
// - Print the transformed code name after applying the mirror operation

// Example:
// Input:
// hello

// Output:
// olleh

// Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored

// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;

void mirrorString(string &s){
    int left = 0, right = s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main(){
    string s;
    cin>>s;
    mirrorString(s);
    cout<<s;
    return 0;
}