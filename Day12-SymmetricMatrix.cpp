// Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

// Input:
// - First line: two integers m and n representing the number of rows and columns
// - Next m lines: n integers each representing the elements of the matrix

// Output:
// - Print "Symmetric Matrix" if the given matrix is symmetric
// - Otherwise, print "Not a Symmetric Matrix"

// Example:
// Input:
// 3 3
// 1 2 3
// 2 4 5
// 3 5 6

// Output:
// Symmetric Matrix

// Explanation:
// The matrix is square (3 × 3) and for every i and j, element[i][j] = element[j][i].

// Test Cases:

// Test Case 1:
// Input:
// 2 2
// 1 2
// 2 1
// Output:
// Symmetric Matrix

// Test Case 2:
// Input:
// 3 3
// 1 0 1
// 2 3 4
// 1 4 5
// Output:
// Not a Symmetric Matrix

// Test Case 3:
// Input:
// 2 3
// 1 2 3
// 4 5 6
// Output:
// Not a Symmetric Matrix

// Time Complexity: O(n²)  
// Auxiliary Space: O(1).

#include<bits/stdc++.h>
using namespace std;

bool isSymmetric(const vector<vector<int>> &matrix, int n){
    if(n != matrix[0].size()) return false;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(matrix[i][j] != matrix[j][i]) return false;
        }
    }
    return true;
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> matrix(m, vector<int> (n));
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n ; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<(isSymmetric(matrix, n) ? "Symmetric Matrix" : "Not a Symmetric Matrix");
    return 0;
}