// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

// Input:
// - First line: integer n representing number of rows and columns
// - Next n lines: n integers each representing the matrix elements

// Output:
// - Print "Identity Matrix" if the matrix satisfies the condition
// - Otherwise, print "Not an Identity Matrix"

// Example:
// Input:
// 3
// 1 0 0
// 0 1 0
// 0 0 1

// Output:
// Identity Matrix

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;
    vector<vector<int>> matrix(n, vector<int> (n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>matrix[i][j];
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                flag = false;
            }
        }
    }
    cout<<(flag ? "Identity Matrix" : "Not an Identity Matrix");
    return 0;
}