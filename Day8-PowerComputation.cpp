// Problem: Given integers a and b, compute a^b using recursion without using pow() function.

// Input:
// - Two space-separated integers a and b

// Output:
// - Print a raised to power b

// Example:
// Input:
// 2 5

// Output:
// 32

// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32

#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b==0) return 1; 
    int half = power(a, b/2);
    if(b%2==0){
        return half*half;
    }
    return a*half*half;
}

int main(){
    int a,b,ans;
    cin>>a>>b;
    ans = power(a, b);
    cout<<ans;
    return 0;
}