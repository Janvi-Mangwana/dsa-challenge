// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int left = 0;
    int right = n - 1;
    int minAbs = INT_MAX;
    int ans1, ans2;

    while(left < right) {
        int sum = v[left] + v[right];
        if(abs(sum) < minAbs) {
            minAbs = abs(sum);
            ans1 = v[left];
            ans2 = v[right];
        }
        if(sum < 0)
            left++;
        else
            right--;
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}